#pragma once
#include "CoreMinimal.h"
#include "EFortSessionHelperJoinResult.generated.h"

UENUM(BlueprintType)
enum class EFortSessionHelperJoinResult : uint8 {
    NoResult,
    ReservationSuccess,
    ReservationFailure_PartyLimitReached,
    ReservationFailure_IncorrectPlayerCount,
    ReservationFailure_RequestTimedOut,
    ReservationFailure_ReservationNotFound,
    ReservationFailure_ReservationDenied,
    ReservationFailure_ReservationDenied_Banned,
    ReservationFailure_ReservationRequestCanceled,
    ReservationFailure_ReservationInvalid,
    ReservationFailure_BadSessionId,
    ReservationFailure_ReservationDenied_ContainsExistingPlayers,
    ReservationFailure_GeneralError,
    ReservationFailure_NoSubsystem,
    ReservationFailure_NoIdentity,
    ReservationFailure_InvalidSession,
    ReservationFailure_InvalidUser,
    ReservationFailure_EncryptionKey,
    ReservationFailure_RefreshAuth,
    ReservationFailure_AlreadyJoiningDuringReserve,
    ReservationFailure_AlreadyJoiningDuringSkip,
    JoinSessionSuccess,
    JoinSessionFailure_SessionIsFull,
    JoinSessionFailure_SessionDoesNotExist,
    JoinSessionFailure_CouldNotRetrieveAddress,
    JoinSessionFailure_AlreadyInSession,
    JoinSessionFailure_UnknownError,
    JoinSessionFailure_InvalidSession,
    JoinSessionFailure_InvalidSearchResultIndex,
    JoinSessionFailure_AlreadyJoiningDuringJoin,
    SearchPassFailure_NoSessionHelper,
    SearchPassFailure_InvalidUser,
    SearchPassFailure_NoIdentity,
    SearchPassFailure_InvalidSearchResult,
    SearchPassFailure_InvalidSearchResultIndex,
    JoinSessionCanceled,
};

