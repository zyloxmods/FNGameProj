#pragma once
#include "CoreMinimal.h"
#include "FortAccountItemDefinition.h"
#include "FortPrerollDataItemDefinition.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortPrerollDataItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StreakbreakerRefundMultiplier;
    
public:
    UFortPrerollDataItemDefinition();
};

