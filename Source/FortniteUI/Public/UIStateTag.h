#pragma once
#include "CoreMinimal.h"
#include "UITag.h"
#include "UIStateTag.generated.h"

USTRUCT(BlueprintType)
struct FUIStateTag : public FUITag {
    GENERATED_BODY()
public:
    FORTNITEUI_API FUIStateTag();
};

