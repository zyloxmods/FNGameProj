#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAdHocSquads_SquadUpResult : uint8 
{
	Failure_OneOrMorePlayersWereNull,
	Failure_BothPlayersAreInAdHocSquads,
	Failure_BothPlayersAreAlreadyInTheSameAdHocSquad,
	Failure_CouldNotCreateAdHocSquad,
	Failure_CalledOnClient,
	Failure_SquadIsAlreadyFull,
	Failure_MutatorIsDisabled,
	Failure_Unknown,
	EAdHocSquads_MAX,
};
