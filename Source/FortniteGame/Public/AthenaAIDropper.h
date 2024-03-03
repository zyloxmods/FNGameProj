#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DroppingAgentData.h"
#include "AthenaAIDropper.generated.h"

UCLASS(Blueprintable)
class UAthenaAIDropper : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDroppingAgentData> InactiveAgents;
    
public:
    UAthenaAIDropper();
};

