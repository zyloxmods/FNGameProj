#pragma once
#include "CoreMinimal.h"
#include "BuildingTurretComponent.h"
#include "MOBATurretPrioritySetting.h"
#include "BuildingTurretComponent_MOBA.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBuildingTurretComponent_MOBA : public UBuildingTurretComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMOBATurretPrioritySetting TargetingPriority;
    
public:
    UBuildingTurretComponent_MOBA();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OnAllyHarmed(AActor* InAllyActor, AActor* InHarmingActor);
    
};

