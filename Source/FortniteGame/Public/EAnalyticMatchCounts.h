#pragma once
#include "CoreMinimal.h"
#include "EAnalyticMatchCounts.generated.h"

UENUM(BlueprintType)
enum class EAnalyticMatchCounts : uint8 {
    IDScannerDoorFailed,
    IDSCannerDoorSuccessBelongsToFaction,
    IDSCannerDoorSuccessPlayerDisguised,
    IDSCannerDoorSuccessCarriedHenchman,
    IDSCannerDoorSuccessCarriedHuman,
    IDScannerChestFailed,
    IDSCannerChestSuccessBelongsToFaction,
    IDSCannerChestSuccessPlayerDisguised,
    IDSCannerChestSuccessCarriedHenchman,
    IDSCannerChestSuccessCarriedHuman,
    HenchmenEnteredAlertedState,
    HenchmenEnteredLKPState,
    HenchmenEnteredThreatenedState,
    HenchmenDowned,
    HenchmenEliminated,
    HenchmenInterrogated,
    BossesEliminated,
    DisguisePhoneBoothTimesEntered,
    DisguiseItemTimesUsed,
    HiddenPassagesTimesEntered,
    CameraOrSentryTimesEnteredCautionState,
    CameraOrSentryTimesEnteredAltertedState,
    CameraOrSentryTimesDestroyed,
    GeneratorTimesDisabled,
    UmbrellaNumberOfDashes,
    UmbrellaNumberUsedToFloat,
    UmbrellaAmountDamageBlocked,
    UmbrellaBulletsBlocked,
    UmbrellaMeleeHitsBlocked,
    Count,
};

