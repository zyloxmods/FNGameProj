#pragma once
#include "CoreMinimal.h"
#include "EFortFeedbackAddressee.generated.h"

UENUM(BlueprintType)
enum EFortFeedbackAddressee {
    FFA_Instigator,
    FFA_Recipient,
    FFA_All,
    FFA_MAX UMETA(Hidden),
};

