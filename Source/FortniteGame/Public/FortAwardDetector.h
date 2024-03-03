#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortAwardDetector.generated.h"

class UFortAwardItemDefinition;

UCLASS(Abstract, Blueprintable)
class UFortAwardDetector : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAwardItemDefinition* AwardDefinition;
    
    UFortAwardDetector();
};

