#pragma once
#include "CoreMinimal.h"
#include "EBackupSaveState.h"
#include "OnBackupRestoreStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBackupRestoreStateChanged, EBackupSaveState, SaveState);

