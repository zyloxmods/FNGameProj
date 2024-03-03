#pragma once
#include "CoreMinimal.h"
#include "FortAnimInput_VelocityImpact.h"
#include "FortPlayerAnimInstance.h"
#include "FortPlayerAnimInstance_OstrichOccupant.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortPlayerAnimInstance_OstrichOccupant : public UFortPlayerAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAnimInput_VelocityImpact VelocityImpact;
    
    UFortPlayerAnimInstance_OstrichOccupant();
};

