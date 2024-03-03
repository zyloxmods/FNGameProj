#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UITag.generated.h"

USTRUCT(BlueprintType)
struct FUITag : public FGameplayTag {
    GENERATED_BODY()
public:
    COMMONUI_API FUITag();
};

