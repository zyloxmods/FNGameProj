#pragma once
#include "CoreMinimal.h"
#include "OnTeamOwningCapturePointChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTeamOwningCapturePointChanged, uint8, OldTeam, uint8, NewTeam);

