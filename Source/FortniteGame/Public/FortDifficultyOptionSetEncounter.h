#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFortEncounterPacingMode.h"
#include "EFortEncounterSpawnLimitType.h"
#include "EFortEncounterSpawnLocationManagementMode.h"
#include "EFortEncounterSpawnLocationPlacementMode.h"
#include "EFortEncounterUtilitiesMode.h"
#include "FortDifficultyOptionSetEncounter.generated.h"

class UFortDifficultyOptionCategoryEncounter_Breathers;
class UFortDifficultyOptionCategoryEncounter_DirectionChange;
class UFortDifficultyOptionCategoryEncounter_DirectionNumber;
class UFortDifficultyOptionCategoryEncounter_Distance;
class UFortDifficultyOptionCategoryEncounter_IntensityCurveSequence;
class UFortDifficultyOptionCategoryEncounter_ModifierTags;
class UFortDifficultyOptionCategoryEncounter_PawnNumberCap;
class UFortDifficultyOptionCategoryEncounter_SpawnGroupProgression;
class UFortDifficultyOptionCategoryEncounter_SpawnLimitPawns;
class UFortDifficultyOptionCategoryEncounter_SpawnLimitPoints;
class UFortDifficultyOptionCategoryEncounter_SpawnPointsBurst;
class UFortDifficultyOptionCategoryEncounter_SpawnPointsCurve;
class UFortDifficultyOptionCategoryEncounter_SpawnPointsMultiplier;
class UFortDifficultyOptionCategoryEncounter_SpawnTiming;
class UFortDifficultyOptionCategoryEncounter_Time;
class UFortDifficultyOptionCategoryEncounter_TimedModifierTags;
class UFortDifficultyOptionCategoryEncounter_UtilitiesAdjustment;
class UFortDifficultyOptionCategoryEncounter_UtilitiesFree;
class UFortDifficultyOptionCategoryEncounter_UtilitiesLocked;

UCLASS(Blueprintable)
class UFortDifficultyOptionSetEncounter : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortEncounterPacingMode::Type> PacingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDifficultyOptionCategoryEncounter_IntensityCurveSequence* IntensityCurveSequenceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDifficultyOptionCategoryEncounter_SpawnPointsCurve* SpawnPointsPercentageCurveSequenceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDifficultyOptionCategoryEncounter_SpawnPointsBurst* SpawnPointsBurstCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDifficultyOptionCategoryEncounter_Breathers* BreathersCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDifficultyOptionCategoryEncounter_SpawnPointsMultiplier* SpawnPointsMultiplierCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDifficultyOptionCategoryEncounter_PawnNumberCap* PawnNumberCapCategory;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDifficultyOptionCategoryEncounter_SpawnTiming* OptionalSpawnTimingCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortEncounterSpawnLimitType::Type> SpawnLimitMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDifficultyOptionCategoryEncounter_SpawnLimitPoints* SpawnPointsLimitCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDifficultyOptionCategoryEncounter_SpawnLimitPawns* PawnLimitCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortEncounterUtilitiesMode::Type> UtilitiesMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDifficultyOptionCategoryEncounter_UtilitiesLocked* LockedUtilitiesCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDifficultyOptionCategoryEncounter_UtilitiesFree* FreeUtilitiesCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDifficultyOptionCategoryEncounter_UtilitiesAdjustment* UtilitiesAdjustmentCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortEncounterSpawnLocationManagementMode SpawnLocationManagementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortEncounterSpawnLocationPlacementMode::Type> SpawnLocationPlacementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDifficultyOptionCategoryEncounter_DirectionNumber* DirectionNumberCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDifficultyOptionCategoryEncounter_DirectionChange* DirectionChangeCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDifficultyOptionCategoryEncounter_Distance* DistanceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDifficultyOptionCategoryEncounter_SpawnGroupProgression* SpawnGroupProgressionCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDifficultyOptionCategoryEncounter_Time* TimeCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDifficultyOptionCategoryEncounter_ModifierTags* OptionalModifierTagsCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDifficultyOptionCategoryEncounter_TimedModifierTags* OptionalMiniBossStartTimedTagsCategory;
    
public:
    UFortDifficultyOptionSetEncounter();
};

