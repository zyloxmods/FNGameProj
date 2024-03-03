#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingErrorV2.generated.h"

UENUM()
enum class EMatchmakingErrorV2 : int32 {
    Success,
    Canceled,
    NeedUpdate,
    VersionMismatch,
    NotLoggedIn,
    NoIdentityInterface,
    NoSessionInterface,
    AlreadyInSession,
    FindSessionFailure,
    FailedToQueryEncryptionKey,
    FailedToRefreshAuthToken,
    FailedToCleanupSession,
    FailedToJoinSession,
    FailedToTravelToSession,
    Unauthorized,
    BannedFromAthena,
    BannedFromAthenaForExploit,
    BannedFromAthenaForTeaming,
    BannedFromAthenaForTeamKilling,
    InvalidCustomMatchKey,
    FailedToContactGameServices,
    FailedToConnectToMMS,
    MMSCommunicationIssue,
    ServiceReturnedError,
    PlaylistNoLongerAvailable,
    CrossplayUnsetWithInputDevicePoolShift,
    CrossplayNeededForTournamentMatch,
    MatchmakingDisabled,
    AccountLevelTooLow,
    JoinInProgressError,
    SpectateInProgressError,
    MatchmakingInProgress,
    FailedToAcquireContent,
    CellularDataRefusal,
    CancelledDownloadContent,
    UnknownError,
};

