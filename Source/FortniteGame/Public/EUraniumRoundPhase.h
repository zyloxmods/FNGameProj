#pragma once
#include "CoreMinimal.h"
#include "EUraniumRoundPhase.generated.h"

UENUM(BlueprintType)
enum class EUraniumRoundPhase : uint8 {
    None,
    EndOfRoundStart,
    ShowRoundEnd,
    HideRoundEnd,
    FadeOut,
    SetupForNextRound,
    ShowRoundIntro,
    ShowPOICamera,
    PerkSelect,
    RoundActive,
    FadeIn,
    EndOfRoundFinish,
    FadeBeforeReleasePlayerIntoGameplay,
    ReleasePlayersIntoGameplay,
    EndGame,
    MAX,
};

