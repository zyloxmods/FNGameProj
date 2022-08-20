#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortFeedbackAddressee : uint8 
{
	FFA_Recipient,
	FFA_All,
	FFA_MAX,
};
