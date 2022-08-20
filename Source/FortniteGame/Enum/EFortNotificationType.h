#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortNotificationType : uint8 
{
	Power,
	HealthWarning,
	Error,
	GiftSent,
	VoiceChannel,
	FriendSubscriptionNudge,
	DonutChallenge,
	HousepartyWelcome,
	HousepartyFOMO,
	HousepartyMic,
	IncomingFriendRequest,
	Max,
};
