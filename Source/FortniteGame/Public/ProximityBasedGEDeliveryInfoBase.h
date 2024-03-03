#pragma once
#include "CoreMinimal.h"
#include "EFortProximityBasedGEApplicationType.h"
#include "FortDeliveryInfoRequirementsFilter.h"
#include "ProximityBasedGEDeliveryInfoBase.generated.h"

USTRUCT(BlueprintType)
struct FProximityBasedGEDeliveryInfoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortDeliveryInfoRequirementsFilter DeliveryRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortProximityBasedGEApplicationType ProximityApplicationType;
    
public:
    FORTNITEGAME_API FProximityBasedGEDeliveryInfoBase();
};

