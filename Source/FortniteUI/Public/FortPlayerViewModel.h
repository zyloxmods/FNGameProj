#pragma once
#include "CoreMinimal.h"
#include "FortViewModel.h"
#include "FortPlayerViewModel.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortPlayerViewModel : public UFortViewModel {
    GENERATED_BODY()
public:
    UFortPlayerViewModel();
};

