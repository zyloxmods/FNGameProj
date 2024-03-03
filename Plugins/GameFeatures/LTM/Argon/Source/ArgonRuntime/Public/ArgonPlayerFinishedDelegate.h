#pragma once
#include "CoreMinimal.h"
#include "ArgonFinishedPlayerInfo.h"
#include "ArgonPlayerFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArgonPlayerFinished, const FArgonFinishedPlayerInfo&, FinishedPlayerInfo);

