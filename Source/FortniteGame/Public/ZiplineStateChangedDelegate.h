#pragma once
#include "CoreMinimal.h"
#include "ZiplineStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FZiplineStateChanged, bool, bIsZiplining);

