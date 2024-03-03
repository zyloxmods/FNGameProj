#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_DeployToVehicle.generated.h"

class AFortAthenaVehicle;
class UGameplayEffect;

UCLASS(Blueprintable)
class AFortAthenaMutator_DeployToVehicle : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortAthenaVehicle> VehicleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText VehicleDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffectToApplyOnDeploy;
    
public:
    AFortAthenaMutator_DeployToVehicle();
};

