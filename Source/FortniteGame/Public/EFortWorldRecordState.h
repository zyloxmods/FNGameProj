#pragma once
#include "CoreMinimal.h"
#include "EFortWorldRecordState.generated.h"

UENUM(BlueprintType)
enum class EFortWorldRecordState : uint8 {
    StartProcessing,
    WaitingForResponse,
    RetrievingTheaterInformation,
    RetrievingZoneInformation,
    LoadingWorldRecord,
    LoadingZoneRecord,
    SavingZoneRecord,
    SavingPlayerProfiles,
    SavingPlayerDeployableBases,
    Succeeded,
    Failed,
    Max_None,
};

