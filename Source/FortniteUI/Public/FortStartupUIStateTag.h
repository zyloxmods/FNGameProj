#pragma once
#include "CoreMinimal.h"
#include "UIStateTag.h"
#include "FortStartupUIStateTag.generated.h"

USTRUCT(BlueprintType)
struct FFortStartupUIStateTag : public FUIStateTag {
    GENERATED_BODY()
public:
    FORTNITEUI_API FFortStartupUIStateTag();
};

