#pragma once
#include "CoreMinimal.h"
#include "ESmartObjectSlotState.h"
#include "SmartObjectExecutionSlot.generated.h"

class AActor;
class UGameplayBehavior;

USTRUCT(BlueprintType)
struct FSmartObjectExecutionSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESmartObjectSlotState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* UserAvatar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayBehavior* AssignedBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    SMARTOBJECTSMODULE_API FSmartObjectExecutionSlot();
};

