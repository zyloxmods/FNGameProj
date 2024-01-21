#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortAthenaAIEvaluator.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortAthenaAIEvaluator : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExecutionStatusName;
    
public:
    UFortAthenaAIEvaluator();
};

