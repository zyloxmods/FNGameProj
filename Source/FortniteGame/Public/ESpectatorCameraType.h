#pragma once
#include "CoreMinimal.h"
#include "ESpectatorCameraType.generated.h"

UENUM(BlueprintType)
enum class ESpectatorCameraType : uint8 {
    ThirdPerson,
    DroneFree,
    Gameplay,
    ReverseShot,
    FollowShot,
    DroneFollow,
    DroneAttach,
    BattleMap,
    ARDrone,
    MAX,
};

