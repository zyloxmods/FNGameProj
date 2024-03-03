#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EMissionGenerationCategory.h"
#include "FortGeneratedDifficultyOptions.h"
#include "FortMissionPlacementItemLookupData.h"
#include "FortMissionEntry.generated.h"

class UFortMissionGenerator;
class UFortMissionInfo;

USTRUCT(BlueprintType)
struct FFortMissionEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WorldMinLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WorldMaxLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle MinDifficultyInfoRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMissionGenerator* MissionGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMissionInfo* MissionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMissionGenerationCategory::Type> GenerationCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGeneratedDifficultyOptions GeneratedDifficultyOptions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortMissionPlacementItemLookupData> BlueprintLookupData;
    
public:
    FORTNITEGAME_API FFortMissionEntry();
};

