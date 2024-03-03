#pragma once
#include "CoreMinimal.h"
#include "EFortDialogResult.h"
#include "FortConfirmationResultDelegate_NUIDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFortConfirmationResultDelegate_NUI, EFortDialogResult, Result, FName, ResultName);

