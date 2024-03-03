#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "GenerateSkinSwapDetectionsCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class UGenerateSkinSwapDetectionsCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UGenerateSkinSwapDetectionsCommandlet();
};

