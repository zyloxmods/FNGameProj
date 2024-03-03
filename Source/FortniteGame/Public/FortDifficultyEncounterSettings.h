#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFortEncounterPacingMode.h"
#include "EFortEncounterSpawnLimitType.h"
#include "EncounterEnvironmentQueryInfo.h"
#include "FortEncounterSettings.h"
#include "FortDifficultyEncounterSettings.generated.h"

class UFortDifficultyOptionEncounter;

UCLASS(Blueprintable)
class UFortDifficultyEncounterSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortDifficultyOptionEncounter*> DifficultyOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterEnvironmentQueryInfo OverrideEncounterEnvironmentQueryInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortEncounterSettings EncounterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortEncounterSpawnLimitType::Type> SpawnLimitMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortEncounterPacingMode::Type> PacingMode;
    
    UFortDifficultyEncounterSettings();
};

