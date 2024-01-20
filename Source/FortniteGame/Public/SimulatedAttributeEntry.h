#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SimulatedAttributeEntry.generated.h"

USTRUCT(BlueprintType)
struct FSimulatedAttributeEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentValue;
    
    FORTNITEGAME_API FSimulatedAttributeEntry();
};

