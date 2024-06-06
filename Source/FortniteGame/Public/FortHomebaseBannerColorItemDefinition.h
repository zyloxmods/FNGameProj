#pragma once
#include "CoreMinimal.h"
#include "FortAccountItemDefinition.h"
#include "FortHomebaseBannerColorItemDefinition.generated.h"

UCLASS(Blueprintable)
class UFortHomebaseBannerColorItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
    UFortHomebaseBannerColorItemDefinition(const FObjectInitializer& ObjectInitializer);
};

