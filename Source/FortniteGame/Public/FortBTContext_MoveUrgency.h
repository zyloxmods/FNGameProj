#pragma once
#include "CoreMinimal.h"
#include "EFortMovementUrgency.h"
#include "FortBTService_ContextOverride.h"
#include "FortBTContext_MoveUrgency.generated.h"

UCLASS(Blueprintable)
class UFortBTContext_MoveUrgency : public UFortBTService_ContextOverride {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortMovementUrgency::Type> MoveUrgency;
    
public:
    UFortBTContext_MoveUrgency();
};

