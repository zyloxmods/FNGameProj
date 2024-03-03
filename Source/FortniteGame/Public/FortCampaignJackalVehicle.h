#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAthenaJackalVehicle.h"
#include "FortCampaignJackalVehicle.generated.h"

class AActor;
class AController;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AFortCampaignJackalVehicle : public AFortAthenaJackalVehicle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVehicleLeftAnalogStrafing;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleLeftAnalogStrafingMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSpeedToWallRun;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AggroRangeOverride;
    
public:
    AFortCampaignJackalVehicle();
    UFUNCTION(BlueprintCallable)
    void HandleOnPlayerDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
};

