#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpecialEventInputUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpecialEventInputUpdate, FVector, InputVector);

