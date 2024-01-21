#pragma once
#include "CoreMinimal.h"
#include "ShouldCancelOverlapProcessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FShouldCancelOverlapProcess, bool&, ShouldCancel);

