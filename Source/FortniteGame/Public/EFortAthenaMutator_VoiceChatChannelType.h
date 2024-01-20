#pragma once
#include "CoreMinimal.h"
#include "EFortAthenaMutator_VoiceChatChannelType.generated.h"

UENUM(BlueprintType)
enum class EFortAthenaMutator_VoiceChatChannelType : uint8 {
    Default,
    None,
    SquadOnly,
    TeamOnly,
    WholeServer,
    ScopeOnly,
    ScopeSquadOnly,
    ScopeTeamOnly,
    EFortAthenaMutator_MAX UMETA(Hidden),
};

