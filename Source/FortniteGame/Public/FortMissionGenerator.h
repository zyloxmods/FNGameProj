#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
#include "FortAthenaLTMConfig.h"
#include "FortMultiSizeBrush.h"
#include "FortPlayerSpawnPadPlacementData.h"
#include "FortPossibleMission.h"
#include "ZoneLoadingScreenConfig.h"
#include "FortMissionGenerator.generated.h"

class UFortMissionGenerationList;
class UFortMissionInfo;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMissionGenerator : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MissionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MissionDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush MissionIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMultiSizeBrush MissionIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZoneLoadingScreenConfig LoadingScreenConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAthenaLTMConfig AthenaLTMConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortMissionInfo> PrimaryMissionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNewMissionGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery OptionalRequirementsForAllOtherMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortMissionGenerationList> MissionGenerationList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissionGenerationChance[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPossibleMission> SecondaryMissionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPossibleMission> TertiaryMissionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPossibleMission> SurvivorMissionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOverridePlayerSpawnPadPlacementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPlayerSpawnPadPlacementData OverridePlayerSpawnPadPlacementData;
    
public:
    UFortMissionGenerator();
};

