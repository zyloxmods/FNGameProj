#pragma once
#include "CoreMinimal.h"
#include "EBuildingAttachmentType.generated.h"

UENUM(BlueprintType)
enum EBuildingAttachmentType {
    ATTACH_Floor,
    ATTACH_Wall,
    ATTACH_Ceiling,
    ATTACH_Corner,
    ATTACH_All,
    ATTACH_WallThenFloor,
    ATTACH_FloorAndStairs,
    ATTACH_CeilingAndStairs,
    ATTACH_None,
    ATTACH_MAX UMETA(Hidden),
};

