#pragma once
#include "CoreMinimal.h"
#include "OnToggledBattleMapLiveDelegate.generated.h"

class ABattleMapPawnLive;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToggledBattleMapLive, ABattleMapPawnLive*, NewSpectatorPawn);

