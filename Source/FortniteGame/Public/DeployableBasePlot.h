#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "BuildingGameplayActor.h"
#include "DeferredActorData.h"
#include "EDeployableBaseBuildingState.h"
#include "FortCloudSaveInfo.h"
#include "FortInventoryOwnerInterface.h"
#include "OnDeployableBaseCoreCreatedDelegate.h"
#include "OnDeployableBaseCoreDestroyedDelegate.h"
#include "OnDeployableBasePlotSpacesChangedDelegate.h"
#include "OnOccupantIdChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "DeployableBasePlot.generated.h"

class ABuildingActor;
class ADeployableBaseCore;
class AFortDeployableBasePickup;
class AFortInventory;
class AFortPlayerStart;
class UBoxComponent;
class UFortDeployableBaseRecord;
class UGameplayEffect;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable, MinimalAPI)
class ADeployableBasePlot : public ABuildingGameplayActor, public IFortInventoryOwnerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_OccupantNetID, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl OccupantNetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortCloudSaveInfo OccupantNextCloudSaveInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortDeployableBaseRecord* OccupantDeployableBaseRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BuildableSpaceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* SavableSpaceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* EntirePlotSpaceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SpawnOffsetComponent;
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBoxComponent* BuildableAreasArray[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ADeployableBaseCore> DeployableBaseCoreClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADeployableBaseCore* DeployableBaseCore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDirty: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDirtiedSinceLastWriteToBuffer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCloudFileSavedSinceLastCloudItemUpdate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentBuildingState, meta=(AllowPrivateAccess=true))
    EDeployableBaseBuildingState CurrentBuildingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EDeployableBaseBuildingState GoalBuildingState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOccupantIdChanged OnOccupantIdChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeployableBaseCoreCreated OnDeployableBaseCoreCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeployableBaseCoreDestroyed OnDeployableBaseCoreDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeployableBasePlotSpacesChanged OnDeployableBasePlotSpacesChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortDeployableBasePickup*> OutstandingAssociatedPickups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AFortInventory* PlotInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DeferredActorIdxToResumeAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumActorsFromRecordDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BuildableSpaceExpansionVector, meta=(AllowPrivateAccess=true))
    FIntVector BuildableSpaceExpansionVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxActorsToCreatePerBuildingCall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxActorsToDestroyPerDestroyCall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenActorRecordBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenActorRecordDestroying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStart* PlayerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ConstructionTimeEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDeferredActorData> DeferredConstructionActors;
    
private:
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FBox BuildableAreasStructuralSupportBoxesArray[3];
    
public:
    ADeployableBasePlot();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetContextComponent(UPrimitiveComponent* ContextComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_OccupantNetID();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentBuildingState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BuildableSpaceExpansionVector();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCurrentBuildingStateSet(EDeployableBaseBuildingState InCurrentBuildingState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBuildingStateTransition(EDeployableBaseBuildingState InPreviousState, EDeployableBaseBuildingState InCurrentState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOccupied() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOccupant(const FUniqueNetIdRepl& UserId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBuildingActorWithinBuildableSpace(const ABuildingActor* ActorToCheck, const FVector& GridLocation) const;
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void HandleBuildingStateTransition(EDeployableBaseBuildingState InPreviousState, EDeployableBaseBuildingState InCurrentState);
    
public:
    UFUNCTION(BlueprintCallable)
    AFortPlayerStart* GetPlayerStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetOccupantNetID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumOfItemsInPlot() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

