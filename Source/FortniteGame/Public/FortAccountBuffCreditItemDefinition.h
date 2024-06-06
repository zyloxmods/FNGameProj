#pragma once
#include "CoreMinimal.h"
#include "FortConsumableAccountItemDefinition.h"
#include "FortAccountBuffCreditItemDefinition.generated.h"

class UFortAccountBuffItemDefinition;

UCLASS(Blueprintable)
class UFortAccountBuffCreditItemDefinition : public UFortConsumableAccountItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAccountBuffItemDefinition> BuffToGrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinutesOfBuffTimeToGrant;
    
    UFortAccountBuffCreditItemDefinition(const FObjectInitializer& ObjectInitializer);
};

