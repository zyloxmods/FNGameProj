#pragma once
#include "CoreMinimal.h"
#include "ENitrogenScoreReason.generated.h"

UENUM(BlueprintType)
enum class ENitrogenScoreReason : uint8 {
    None,
    WorldPickup,
    EnemyDeathPickup,
    FareReward_Base,
    FareReward_Bonus_FastDelivery,
    FareReward_Bonus_Bulldozer,
    FareReward_Bonus_StuntDriving,
    FareReward_Bonus_SafeDriver,
    FareReward_Bonus_BumperCars,
    FareReward_Bonus_OffRoad,
    FareReward_Bonus_SpeedDemon,
};

