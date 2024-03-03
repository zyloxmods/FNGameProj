#pragma once
#include "CoreMinimal.h"
#include "FortPlayerInput.h"
#include "FortPlayerInputAthena.generated.h"

class UFortGamepadSettings;

UCLASS(Blueprintable, NonTransient)
class UFortPlayerInputAthena : public UFortPlayerInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGamepadSettings* GamepadSettings;
    
    UFortPlayerInputAthena();
};

