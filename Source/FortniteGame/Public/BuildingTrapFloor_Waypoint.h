#pragma once
#include "CoreMinimal.h"
#include "BuildingTrapFloor.h"
#include "LevelDuplicatable.h"
#include "WaypointIndex.h"
#include "BuildingTrapFloor_Waypoint.generated.h"

class ABuildingTrapFloor_Waypoint;
class AFortPlayerPawn;
class AFortWaypointInfo;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ABuildingTrapFloor_Waypoint : public ABuildingTrapFloor, public ILevelDuplicatable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FWaypointIndex Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingTrapFloor_Waypoint* NextPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingTrapFloor_Waypoint* PreviousPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SplinePointLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DeactivatedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WaypointGroup, meta=(AllowPrivateAccess=true))
    AFortWaypointInfo* WaypointGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortWaypointInfo* CachedWaypointGroup;
    
    ABuildingTrapFloor_Waypoint();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaypointReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaypointCaptured();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnSpline();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WaypointGroup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentWaypoint(AFortPlayerPawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void CaptureWaypoint(AFortPlayerPawn* Capturer);
    
    
    // Fix for true pure virtual functions not being implemented
};

