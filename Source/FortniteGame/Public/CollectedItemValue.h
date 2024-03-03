#pragma once
#include "CoreMinimal.h"
#include "CollectedItemValue.generated.h"

class UFortWorldItemDefinition;

USTRUCT(BlueprintType)
struct FCollectedItemValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* CollectedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DepositAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DepositGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CaptureCount;
    
    FORTNITEGAME_API FCollectedItemValue();
};

