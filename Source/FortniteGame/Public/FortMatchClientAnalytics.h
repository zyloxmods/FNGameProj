#pragma once
#include "CoreMinimal.h"
#include "FortMatchAnalytics.h"
#include "FortMatchClientAnalytics.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMatchClientAnalytics : public UFortMatchAnalytics {
    GENERATED_BODY()
public:
    UFortMatchClientAnalytics();
};

