#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAnalyticMatchCounts : uint8 
{
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
	EAnalyticMatchCounts_MAX,
};
