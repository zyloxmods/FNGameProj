#pragma once
#include "CoreMinimal.h"
#include "EFortPickerMode.h"
#include "OnShowPickerDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnShowPickerDelegate, EFortPickerMode, Mode, int32, InitialOption, bool, bIgnoreFirstAccept);

