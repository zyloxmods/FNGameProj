#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EFortTheaterMapTileType.h"
#include "FortLinkedQuest.h"
#include "FortRequirementsInfo.h"
#include "FortTheaterDifficultyWeight.h"
#include "FortTheaterMissionWeight.h"
#include "Templates/SubclassOf.h"
#include "FortTheaterTileEditorData.generated.h"

class UFortRegionInfo;
class UFortZoneTheme;

USTRUCT(BlueprintType)
struct FFortTheaterTileEditorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XCoordinate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 YCoordinate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortZoneTheme> ZoneTheme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortRegionInfo* Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRequirementsInfo Requirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortLinkedQuest> LinkedQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortTheaterMapTileType TileType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TileTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTheaterMissionWeight> MissionWeightOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTheaterDifficultyWeight> DifficultyWeightOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeMissionAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisallowQuickplay;
    
    FORTNITEGAME_API FFortTheaterTileEditorData();
};

