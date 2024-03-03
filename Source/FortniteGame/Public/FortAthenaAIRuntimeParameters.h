#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortAthenaAIRuntimeParameters.generated.h"

UCLASS(Blueprintable, Transient)
class UFortAthenaAIRuntimeParameters : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtractedLevel;
    
    UFortAthenaAIRuntimeParameters();
};

