#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Info.h"
#include "PlayerWaypointContext.h"
#include "FortWaypointInfo.generated.h"

class ABuildingTrapFloor_Waypoint;
class AFortProjectileTrajectory;

UCLASS(Blueprintable)
class AFortWaypointInfo : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABuildingTrapFloor_Waypoint*> Waypoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SplineLocations, meta=(AllowPrivateAccess=true))
    TArray<FVector> SplineLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FPlayerWaypointContext> ContextArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortProjectileTrajectory* Spline;
    
    AFortWaypointInfo();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SplineLocations();
    
    UFUNCTION(BlueprintCallable)
    bool IsStartingWaypoint(ABuildingTrapFloor_Waypoint* Waypoint);
    
    UFUNCTION(BlueprintCallable)
    bool IsEndingWaypoint(ABuildingTrapFloor_Waypoint* Waypoint);
    
};

