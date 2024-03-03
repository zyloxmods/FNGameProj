#pragma once
#include "CoreMinimal.h"
#include "OnWinningTeamDeclaredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWinningTeamDeclared, uint8, TheWinningTeam);

