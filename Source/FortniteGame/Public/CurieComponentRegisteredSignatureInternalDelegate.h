#pragma once
#include "CoreMinimal.h"
#include "CurieComponentRegisteredSignatureInternalDelegate.generated.h"

class UFortCurieComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCurieComponentRegisteredSignatureInternal, UFortCurieComponent*, RegisteredCurieComponent);

