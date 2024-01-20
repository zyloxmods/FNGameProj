#pragma once
#include "CoreMinimal.h"
#include "EBackupSaveState.h"
#include "OnBackupSaveStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBackupSaveStateChanged, EBackupSaveState, SaveState);

