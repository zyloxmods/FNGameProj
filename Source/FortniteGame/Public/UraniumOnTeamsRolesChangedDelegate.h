#pragma once
#include "CoreMinimal.h"
#include "UraniumOnTeamsRolesChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUraniumOnTeamsRolesChanged, uint8, PusherTeam, uint8, DefenderTeam);

