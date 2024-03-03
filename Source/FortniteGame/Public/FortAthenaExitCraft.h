#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EExitCraftState.h"
#include "FortAthenaVehicle.h"
#include "LocationLerpData.h"
#include "RotationLerpData.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaExitCraft.generated.h"

class AActor;
class AFortAthenaExitCraftBalloon;
class AFortPlayerPawnAthena;
class UCurveFloat;
class UFortAthenaExitCraftInfo;
class UFortPhysicsVehicleConfigs;
class UMaterialInterface;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AFortAthenaExitCraft : public AFortAthenaVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* OverlapMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UFortAthenaExitCraftInfo* ExitCraftInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CraftSpecialActorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    EExitCraftState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_QualifyingPlayers, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPawnAthena*> OverlappingPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortAthenaExitCraftBalloon> BalloonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BalloonActor, meta=(AllowPrivateAccess=true))
    AFortAthenaExitCraftBalloon* BalloonActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPhysicsVehicleConfigs> FortVehicleConfigClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* GettingIntoPostionCurve_Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* GettingIntoPostionCurve_Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuildingZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToApplyOnAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InteractText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SafetyTimerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> VehicleSkins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VehicleSkinIndex, meta=(AllowPrivateAccess=true))
    int32 VehicleSkinIndex;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPawnAthena*> PlayersNeedingSeats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LocationLerpData, meta=(AllowPrivateAccess=true))
    FLocationLerpData LocationLerpData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RotationLerpData, meta=(AllowPrivateAccess=true))
    FRotationLerpData RotationLerpData;
    
public:
    AFortAthenaExitCraft();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_VehicleSkinIndex();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_RotationLerpData();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_QualifyingPlayers();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_LocationLerpData();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BalloonActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRemakeMIDs();
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapStart(AActor* TestActor);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(AActor* TestActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewState(EExitCraftState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnDepartFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetBalloonLocation() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void CheatDepart();
    
};

