#pragma once
#include "CoreMinimal.h"
#include "FortPlayerDeathReport.h"
#include "ArsenicOnLocalPlayerDiedAsHumanDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FArsenicOnLocalPlayerDiedAsHuman, const AFortPlayerStateAthena*, VictimPlayerState, const FFortPlayerDeathReport&, DeathReport);

