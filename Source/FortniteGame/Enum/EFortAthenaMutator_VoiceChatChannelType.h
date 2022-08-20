#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortAthenaMutator_VoiceChatChannelType : uint8 
{
	None,
	SquadOnly,
	TeamOnly,
	WholeServer,
	ScopeOnly,
	ScopeSquadOnly,
	ScopeTeamOnly,
	EFortAthenaMutator_MAX,
};
