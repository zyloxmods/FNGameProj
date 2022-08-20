#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EMessageFeedRelationshipFilter : uint8 
{
	SquadAndTeamMembers,
	SquadMembersOnly,
	SelfOnly,
	EMessageFeedRelationshipFilter_MAX,
};
