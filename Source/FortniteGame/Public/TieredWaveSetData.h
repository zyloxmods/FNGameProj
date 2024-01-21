#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EWaveRules.h"
#include "TieredWaveSetData.generated.h"

class UFortDifficultyOptionEncounter_DirectionNumber;
class UFortDifficultyOptionEncounter_Distance;
class UFortDifficultyOptionEncounter_ModifierTags;
class UFortDifficultyOptionEncounter_SpawnGroupProgression;
class UFortDifficultyOptionEncounter_SpawnPointsCurve;
class UFortDifficultyOptionEncounter_SpawnPointsMultiplier;
class UFortDifficultyOptionEncounter_TimedModifierTags;
class UFortDifficultyOptionEncounter_UtilitiesAdjustment;
class UFortDifficultyOptionEncounter_UtilitiesFree;
class UFortDifficultyOptionEncounter_UtilitiesLocked;
class UFortMissionInfo;

USTRUCT(BlueprintType)
struct FTieredWaveSetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EDOIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreatherBetweenWaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWaveRules WaveRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EnemyTypeToKillMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortMissionInfo>> WaveMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaveLengthMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NumKillsMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KillPointsMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DifficultyAddMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeferTemporaryModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortDifficultyOptionEncounter_SpawnPointsMultiplier> OverrideSpawnPointsMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortDifficultyOptionEncounter_SpawnPointsCurve> OverrideSpawnPointsCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortDifficultyOptionEncounter_SpawnGroupProgression> OverrideSpawnProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortDifficultyOptionEncounter_UtilitiesAdjustment> OverrideUtilitiesAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortDifficultyOptionEncounter_UtilitiesFree> OverrideUtilitiesFree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortDifficultyOptionEncounter_UtilitiesLocked> OverrideUtilitiesLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortDifficultyOptionEncounter_Distance> OverrideDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortDifficultyOptionEncounter_DirectionNumber> OverrideDirectionNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortDifficultyOptionEncounter_ModifierTags> OverrideModifierTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortDifficultyOptionEncounter_TimedModifierTags> OverrideTimedModifierTags;
    
    FORTNITEGAME_API FTieredWaveSetData();
};

