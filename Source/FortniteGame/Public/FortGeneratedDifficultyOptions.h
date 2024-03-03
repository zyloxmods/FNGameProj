#pragma once
#include "CoreMinimal.h"
#include "FortGeneratedEncounterProfile.h"
#include "FortGeneratedEncounterSequence.h"
#include "FortGeneratedMissionOption.h"
#include "FortGeneratedDifficultyOptions.generated.h"

USTRUCT(BlueprintType)
struct FFortGeneratedDifficultyOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameDifficultyAtGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DifficultyOptionPointsAvailableAtGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxEncounterSpawnPointsAtGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinDifficultyOptionPointsToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGeneratedEncounterSequence> GeneratedEncounterSequences;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGeneratedMissionOption> MissionOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGeneratedEncounterProfile> GeneratedEncounterProfiles;
    
public:
    FORTNITEGAME_API FFortGeneratedDifficultyOptions();
};

