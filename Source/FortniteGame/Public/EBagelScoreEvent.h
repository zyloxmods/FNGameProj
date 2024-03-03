#pragma once
#include "CoreMinimal.h"
#include "EBagelScoreEvent.generated.h"

UENUM(BlueprintType)
namespace EBagelScoreEvent {
    enum Type {
        FiendKill,
        BruteKill,
        RangedKill,
        ExplodingKill,
        ChillKill,
        PoisonKill,
        GoldKill,
        RiftDestroyed,
        ScoreMultiplierUsed,
        HeadshotKill,
        RespawnPenalty,
        AmmoBoxOpened,
        ChestOpened,
        FinalBossKill,
        MAX,
    };
}

