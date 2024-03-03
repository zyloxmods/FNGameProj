#pragma once
#include "CoreMinimal.h"
#include "EMashScoreEvent.generated.h"

UENUM(BlueprintType)
enum class EMashScoreEvent : uint8 {
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


