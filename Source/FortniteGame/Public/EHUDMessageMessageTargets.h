#pragma once
#include "CoreMinimal.h"
#include "EHUDMessageMessageTargets.generated.h"

UENUM(BlueprintType)
enum class EHUDMessageMessageTargets : uint8 {
    All,
    TeamOne,
    TeamTwo,
    TeamThree,
    TeamFour,
    TeamFive,
    TeamSix,
    TeamSeven,
    TeamEight,
    TeamNine,
    TeamTen,
    TeamEleven,
    TeamTwelve,
    TeamThirteen,
    TeamFourteen,
    TeamFifthteen,
    TeamSixteen,
    TriggeringPlayer,
    Friendlies,
    Hostiles,
};

