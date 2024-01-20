#pragma once
#include "CoreMinimal.h"
#include "EBuildingAttachmentSlot.generated.h"

UENUM(BlueprintType)
enum EBuildingAttachmentSlot {
    SLOT_Floor,
    SLOT_Wall,
    SLOT_Ceiling,
    SLOT_None,
    SLOT_MAX UMETA(Hidden),
};

