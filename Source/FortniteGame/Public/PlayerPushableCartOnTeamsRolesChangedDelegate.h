#pragma once
#include "CoreMinimal.h"
#include "PlayerPushableCartOnTeamsRolesChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerPushableCartOnTeamsRolesChanged, uint8, PusherTeam, uint8, DefenderTeam);

