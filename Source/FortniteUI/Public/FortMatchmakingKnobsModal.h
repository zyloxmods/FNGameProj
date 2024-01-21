#pragma once
#include "CoreMinimal.h"
#include "PlaylistFrontEndData.h"
#include "UFortMatchmakingKnobsDataSource.h"
#include "FortActivatablePanel.h"
#include "FortMatchmakingKnobsModal.generated.h"

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
    UCommonButton* CancelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* RestoreDefaultsButton;
    
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
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitForOptionsComponent(UFortActorOptionsComponent* OptionsComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleNoOptionsLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleCancelClicked();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetScrolledOffWhitelistedPlayers();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyChanges();
    
};

