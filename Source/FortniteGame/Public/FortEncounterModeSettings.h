#pragma once
#include "CoreMinimal.h"
#include "EFortEncounterPacingMode.h"
#include "EFortEncounterSpawnLimitType.h"
#include "EFortEncounterSpawnLocationManagementMode.h"
#include "EFortEncounterSpawnLocationPlacementMode.h"
#include "EFortEncounterUtilitiesMode.h"
#include "FortEncounterModeSettings.generated.h"

USTRUCT(BlueprintType)
struct FFortEncounterModeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortEncounterPacingMode::Type> PacingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortEncounterSpawnLocationManagementMode SpawnLocationManagementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortEncounterSpawnLocationPlacementMode::Type> SpawnLocationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortEncounterUtilitiesMode::Type> UtilitiesMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortEncounterSpawnLimitType::Type> SpawnLimitMode;
    
    FORTNITEGAME_API FFortEncounterModeSettings();
};

