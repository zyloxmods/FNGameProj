#pragma once
#include "CoreMinimal.h"
#include "AthenaCosmeticItemDefinition.h"
#include "AthenaCallingCardItemDefinition.generated.h"

UCLASS(Blueprintable)
class UAthenaCallingCardItemDefinition : public UAthenaCosmeticItemDefinition {
    GENERATED_BODY()
public:
    UAthenaCallingCardItemDefinition(const FObjectInitializer& ObjectInitializer);
};

