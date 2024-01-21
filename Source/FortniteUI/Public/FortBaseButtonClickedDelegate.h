#pragma once
#include "CoreMinimal.h"
#include "FortBaseButtonClickedDelegate.generated.h"

class UFortBaseButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortBaseButtonClicked, UFortBaseButton*, Button);

