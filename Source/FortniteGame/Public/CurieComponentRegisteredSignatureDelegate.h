#pragma once
#include "CoreMinimal.h"
#include "CurieComponentRegisteredSignatureDelegate.generated.h"

class UFortCurieComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCurieComponentRegisteredSignature, UFortCurieComponent*, RegisteredCurieComponent);

