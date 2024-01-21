#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "BuildingGameplayActor.h"
#include "EFOBIOStatus.h"
#include "EFOBMode.h"
#include "FOBCoreChoice.h"
#include "FOBCoreChoiceArray.h"
#include "OnAllBuildingsSpawnedDelegate.h"
#include "OnBuildingFOBConfigActorIOOperationCompleteDelegate.h"
#include "BuildingFOBConfigActor.generated.h"

class ABuildingActor;
class ABuildingFOBCoreActor;
class ABuildingFOBCoreSpawnPad;
class AFOBSaveFileBuildingInstructionsHandler;
class AFortPlayerController;
class UBoxComponent;
class UFortBuildingInstructions;
class UFortFOBCoreDecoItemDefinition;
class UObjectLibrary;

UCLASS(Blueprintable, MinimalAPI)
class ABuildingFOBConfigActor : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBuildingFOBConfigActorIOOperationComplete OnIOOperationComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExplicitSaveFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortBuildingInstructions> FallbackBuildingInstructions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CoreSaveFileUniqueContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ABuildingFOBCoreSpawnPad> CreationModeSpawnPadClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SpawnPadPlacementActorRequiredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObjectLibrary> FOBCoreLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLoadFirstCoreInCreationMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FFOBCoreChoiceArray FOBCoreChoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UFortFOBCoreDecoItemDefinition* SelectedCoreItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ABuildingFOBCoreActor* SelectedCore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingFOBCoreSpawnPad* CoreSpawnPad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFOBSaveFileBuildingInstructionsHandler* SaveFileInstructionsHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl OwnerNetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FOBMode, meta=(AllowPrivateAccess=true))
    EFOBMode FOBMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EFOBIOStatus IOStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bEnumeratedUserFilesSuccessfully: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCoreBasedDeploymentModeFinalizationRequested: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bInitialized: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bFinalized, meta=(AllowPrivateAccess=true))
    uint8 bFinalized: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDummyDeployment: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllBuildingsSpawned OnAllBuildingsSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ContainmentBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBox ContainmentBoxStructuralGridBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SpawnLocationTags;
    
public:
    ABuildingFOBConfigActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool ReloadFOB();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_FOBMode();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bFinalized();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnIOOperationCompleteMulticast(EFOBIOStatus IOOperation, bool bSuccess, UFortFOBCoreDecoItemDefinition* SelectedCoreDef);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFOBModeSet(EFOBMode ModeThatWasSet);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinalized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinalizationPlayFX();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void OnFinalizationFXMulticast();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCoreInitialized(ABuildingFOBCoreActor* InitializedCore);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerControllerFOBOwner(const AFortPlayerController* FortPC) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinalized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBuildingActorWithinFOB(ABuildingActor* ActorToCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortFOBCoreDecoItemDefinition* GetSelectedFOBCoreItemDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFOBMode GetFOBMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFOBCoreChoice> GetAllCoreChoices() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSaveFOB() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanReloadFOB() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPerformIOOperation() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool AttemptSelectFOBCore(UFortFOBCoreDecoItemDefinition* DefToSelect);
    
};

