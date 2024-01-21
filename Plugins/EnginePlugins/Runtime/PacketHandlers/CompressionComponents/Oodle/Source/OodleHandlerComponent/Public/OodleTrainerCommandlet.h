#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "OodleTrainerCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class UOodleTrainerCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UOodleTrainerCommandlet();
};

