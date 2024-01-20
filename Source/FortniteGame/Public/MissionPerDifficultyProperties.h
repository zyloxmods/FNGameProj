#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortGlobalWindInfo.h"
#include "FortTimeOfDayTheme.h"
#include "MissionPerDifficultyProperties.generated.h"

USTRUCT(BlueprintType)
struct FMissionPerDifficultyProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> ValidDifficulties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTimeOfDayTheme OverrideTimeOfDayTheme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGlobalWindInfo OverrideGlobalWindInfo;
    
    FORTNITEGAME_API FMissionPerDifficultyProperties();
};

