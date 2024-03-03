#pragma once
#include "CoreMinimal.h"
#include "SpecialEventInputButton.h"
#include "SpecialEventInputPressDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpecialEventInputPress, SpecialEventInputButton, Button, bool, bPressed);

