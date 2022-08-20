#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortPartyMemberLocation : uint8 
{
	ConnectingToLobby,
	Lobby,
	JoiningGame,
	ProcessingRejoin,
	InGame,
	Spectating,
	WatchingReplay,
	ReturningToFrontEnd,
	EFortPartyMemberLocation_MAX,
};
