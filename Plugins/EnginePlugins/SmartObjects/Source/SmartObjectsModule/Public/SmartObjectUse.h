#pragma once
#include "CoreMinimal.h"
#include "SmartObjectExecutionSlot.h"
#include "SmartObjectUse.generated.h"

USTRUCT(BlueprintType)
struct SMARTOBJECTSMODULE_API FSmartObjectUse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSmartObjectExecutionSlot Slot;
    
    FSmartObjectUse();
};

