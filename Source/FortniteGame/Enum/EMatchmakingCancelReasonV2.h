#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EMatchmakingCancelReasonV2 : uint8 
{
	JoinedParty,
	LeftParty,
	PartyMemberJoined,
	PartyMemberLeft,
	PartyMemberCanceled,
	PartyLeaderSwap,
	PlayReplay,
	UIDestroyed,
	PCDestroyed,
	AppBackgrounded,
	HotfixOutdated,
	TournamentOver,
	NotInParty,
	CrossplayBlocked,
	TournamentCrossplayBlocked,
	AccountLevelTooLow,
	FillNoCrossplay,
	CreativeCanceledByLeader,
	CreativeMemberLeftIsland,
	CreativeIslandStateChanged,
	JoinInProgressRejected,
	MatchmakingDisabled,
	NotLoggedIn,
	NoIdentityInterface,
	NoSessionInterface,
	TimedOut,
	InvalidPlaylist,
	AttemptedToQueueTooFrequently,
	TournamentBlackout,
	CellularDataRefusal,
	CancelledDownloadContent,
	Unknown,
	EMatchmakingCancelReasonV2_MAX,
};
