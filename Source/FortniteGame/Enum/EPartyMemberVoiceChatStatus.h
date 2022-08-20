#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EPartyMemberVoiceChatStatus : uint8 
{
	Enabled,
	PartyVoice,
	GameVoice,
	PlatformVoice,
	EPartyMemberVoiceChatStatus_MAX,
};
