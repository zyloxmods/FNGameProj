#pragma once
#include "CoreMinimal.h"
#include "EMashScoreEvent.generated.h"

UENUM(BlueprintType)
namespace EMashScoreEvent {
    enum Type {
        FiendKill,
        BruteKill,
        RangedKill,
        ExplodingKill,
        ChillKill,
        PoisonKill,
        GoldKill,
        RiftDestroyed,
        ChestOpened,
        ScoreMultiplierUsed,
        HeadshotKill,
        RespawnPenalty,
        MAX,
    };
}

