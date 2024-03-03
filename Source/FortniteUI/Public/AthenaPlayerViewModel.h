#pragma once
#include "CoreMinimal.h"
#include "FortPlayerViewModel.h"
#include "AthenaPlayerViewModel.generated.h"

UCLASS(Abstract, Blueprintable)
class UAthenaPlayerViewModel : public UFortPlayerViewModel {
    GENERATED_BODY()
public:
    UAthenaPlayerViewModel();
};

