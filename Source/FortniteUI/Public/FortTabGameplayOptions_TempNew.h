#pragma once
#include "CoreMinimal.h"
#include "FortOptionsTab_NewSystemShim.h"
#include "FortTabGameplayOptions_TempNew.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTabGameplayOptions_TempNew : public UFortOptionsTab_NewSystemShim {
    GENERATED_BODY()
public:
    UFortTabGameplayOptions_TempNew();
};

