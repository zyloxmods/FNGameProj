#pragma once
#include "CoreMinimal.h"
#include "EMessageFeedRelationshipFilter.generated.h"

UENUM(BlueprintType)
enum class EMessageFeedRelationshipFilter : uint8 {
    Anyone,
    SquadAndTeamMembers,
    SquadMembersOnly,
    SelfOnly,
};

