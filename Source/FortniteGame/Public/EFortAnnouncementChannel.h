#pragma once
#include "CoreMinimal.h"
#include "EFortAnnouncementChannel.generated.h"

UENUM(BlueprintType)
enum class EFortAnnouncementChannel : uint8 {
    Primary,
    Conversation,
    Tutorial,
    Max_None,
};

