#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortGlobalWindInfo.h"
#include "FortTimeOfDayTheme.h"
#include "ZoneThemeDifficultyProperties.generated.h"

USTRUCT(BlueprintType)
struct FZoneThemeDifficultyProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> ValidDifficulties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTimeOfDayTheme TimeOfDayTheme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGlobalWindInfo GlobalWindInfo;
    
    FORTNITEGAME_API FZoneThemeDifficultyProperties();
};

