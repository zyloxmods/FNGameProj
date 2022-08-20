#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortDialogFeedbackType : uint8 
{
	FriendRequestReceived,
	FriendRequestAccepted,
	Default,
	EFortDialogFeedbackType_MAX,
};
