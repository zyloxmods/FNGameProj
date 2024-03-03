#pragma once
#include "CoreMinimal.h"
#include "UIStateTag.h"
#include "AthenaUIStateTag.generated.h"

USTRUCT(BlueprintType)
struct FAthenaUIStateTag : public FUIStateTag {
    GENERATED_BODY()
public:
    FORTNITEUI_API FAthenaUIStateTag();
};

