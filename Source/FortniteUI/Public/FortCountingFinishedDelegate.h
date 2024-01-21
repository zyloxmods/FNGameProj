#pragma once
#include "CoreMinimal.h"
#include "FortCountingFinishedDelegate.generated.h"

class UFortNumericTextBlock;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortCountingFinished, UFortNumericTextBlock*, NumericTextBlock);

