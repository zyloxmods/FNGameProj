#pragma once
#include "CoreMinimal.h"
#include "EFortDialogResult.h"
#include "FortDialogExternalLatentActionHandle.h"
#include "FortAdvancedLatentConfirmationDialogResultDelegate_NUIDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FFortAdvancedLatentConfirmationDialogResultDelegate_NUI, EFortDialogResult, Result, FName, ResultName, bool, bWaitingForLatentActionCompletion, FFortDialogExternalLatentActionHandle, WaitingDialogHandle);

