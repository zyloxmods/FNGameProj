#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/CurveTable.h"
#include "GameplayTagContainer.h"
#include "AnyPropertyChangedDelegateDelegate.h"
#include "FortPropertyOverrideProvider.h"
#include "FortPropertyOverrideReplProvider.h"
#include "LevelSaveSpawnable.h"
#include "PropertyOverrideData.h"
#include "RestoreDefaultsDelegateDelegate.h"
#include "FortActorOptionsComponent.generated.h"

class AFortPawn;
class AFortPlayerController;
class AFortPlayerPawn;
class UFortItemDefinition;
class UPlaylistUserOptionBase;
class UPlaylistUserOptions;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortActorOptionsComponent : public UActorComponent, public ILevelSaveSpawnable, public IFortPropertyOverrideProvider, public IFortPropertyOverrideReplProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OptionsDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OptionsDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlaylistUserOptionBase* OverrideDisplayNameOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InteractionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle InteractionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortItemDefinition> OptionsItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlaylistUserOptions* PlayerOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_PlayerOptionData, meta=(AllowPrivateAccess=true))
    FPropertyOverrideData PlayerOptionData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnyPropertyChangedDelegate OnAnyPropertyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnyPropertyChangedDelegate OnPropertiesLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnyPropertyChangedDelegate OnPropertiesReadyForLocalization;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRestoreDefaultsDelegate OnRestoreDefaults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRedirectInteractToParent;
    
    UFortActorOptionsComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void TryToLocalizeStrings();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetPropertyOverrideValues(const TMap<FString, FString>& NewOptions);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetPropertyOverrides(const TMap<FString, FString>& NewOptions);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResolvePendingRepOverrides();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemovePropertyOverrides(const TArray<FString>& Options);
    
    UFUNCTION(BlueprintCallable)
    void OverrideOptionsDisplayName(AFortPlayerController* Controller, const FText& DisplayName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerOptionData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    bool OnLocalInteract(AFortPlayerPawn* InteractingPawn);
    
    UFUNCTION(BlueprintCallable)
    bool IsRenameDisplayButtonEnabled();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePlaylistLoadedForLocalization(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPropertyOverrides(TMap<FString, FString>& CurrentOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPropertyEditorV2Enabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOptionsText(FText& DisplayName, FText& Descriptions, const bool bBaseName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEditOptionsComponent(AFortPawn* InteractingPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    bool BlueprintOnLocalInteract(AFortPlayerPawn* InteractingPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BlueprintGetInteractionTime(const AFortPawn* InteractingPawn, float& OutInteractionTime) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

