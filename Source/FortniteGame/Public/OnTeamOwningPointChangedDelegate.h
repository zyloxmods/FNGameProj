#pragma once
#include "CoreMinimal.h"
#include "OnTeamOwningPointChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTeamOwningPointChanged, uint8, OldTeam, uint8, NewTeam);

