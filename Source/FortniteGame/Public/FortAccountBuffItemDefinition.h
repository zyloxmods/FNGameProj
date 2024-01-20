#pragma once
#include "CoreMinimal.h"
#include "FortAccountItemDefinition.h"
#include "FortAccountBuffItemDefinition.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable, MinimalAPI)
class UFortAccountBuffItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UGameplayEffect>> BuffEffects;
    
    UFortAccountBuffItemDefinition();
};

