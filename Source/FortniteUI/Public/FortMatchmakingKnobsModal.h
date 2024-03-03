#pragma once
#include "CoreMinimal.h"
#include "PlaylistFrontEndData.h"
#include "UFortMatchmakingKnobsDataSource.h"
#include "GameplayTagContainer.h"
#include "EFortModifiedStatus.h"
#include "FortActivatablePanel.h"
#include "FortMatchmakingKnobsModal.generated.h"

class AActor;
class AFortMinigameSettingsBuilding;
class APlayerState;
class UCommonButton;
class UCommonListView;
class UCommonTextBlock;
class UFortActorOptionsComponent;
class UFortMatchmakingKnobsSpinnerButton;
class UFortPlaylistAthena;
class UFortUserPermissions;
class UImage;
class UObject;
class UPlaylistUserOptions;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMatchmakingKnobsModal : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MobileOptionListEntrySpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortMinigameSettingsBuilding* Machine;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> ScrolledOffWhitelistedPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> LoadedPlayerArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortUserPermissions*> PermissionsUserList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlaylistUserOptions* OptionsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> OptionDataProviders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPlaylistFrontEndData FrontEndData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> LoadedOptionValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlaylistAthena* CurrentPlaylist;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* OptionsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* AcceptButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_HeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_DisplayImage;
    
    UFortMatchmakingKnobsModal();
    UFUNCTION(BlueprintCallable)
    void SetListDataSource(TEnumAsByte<UFortMatchmakingKnobsDataSource::Type> ListType);
    
    UFUNCTION(BlueprintCallable)
    void SetInScrimmage();
    
    UFUNCTION(BlueprintCallable)
    void SetInGameMode(bool bIsInGame);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveFromModalLayer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetInGameMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectionUpdated(UFortMatchmakingKnobsSpinnerButton* CurrentSelection);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHoveredItemChanged(UObject* Item, bool bIsHovered);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCurrentItemSelectionChanged(UObject* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnAcceptAnimationComplete();
    
    UFUNCTION(BlueprintCallable)
    void InitializeData();
    
    UFUNCTION(BlueprintCallable)
    void InitForToyOptionsActor(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitForOptionsComponent(UFortActorOptionsComponent* OptionsComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool HasMatchingTags(UObject* Option, FGameplayTagContainer Tags);
    
    UFUNCTION(BlueprintCallable)
    void HandleRestoreClicked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleNoOptionsLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleCancelClicked();
    
protected:
    UFUNCTION(BlueprintCallable)
    EFortModifiedStatus GetSpinnerModificationStatus(UFortMatchmakingKnobsSpinnerButton* SpinnerButton);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetScrolledOffWhitelistedPlayers();
    
protected:
    UFUNCTION(BlueprintCallable)
    EFortModifiedStatus GetModificationStatus(UObject* Option);
    
    UFUNCTION(BlueprintCallable)
    bool DoesContainString(UObject* Option, const FString& String);
    
    UFUNCTION(BlueprintCallable)
    void ApplyChanges(const bool bApplySettingsFromCachedData);
    
};

