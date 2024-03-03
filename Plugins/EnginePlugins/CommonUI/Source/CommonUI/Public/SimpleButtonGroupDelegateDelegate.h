#pragma once
#include "CoreMinimal.h"
#include "SimpleButtonGroupDelegateDelegate.generated.h"

class UCommonButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSimpleButtonGroupDelegate, UCommonButton*, AssociatedButton, int32, ButtonIndex);

