#pragma once
#include "CoreMinimal.h"
#include "SpawnGroupVisuals.generated.h"

class AFortAIPawn;
class UFortDifficultyOptionEncounter_SpawnGroupProgression;
class UPhysicsAsset;

USTRUCT(BlueprintType)
struct FSpawnGroupVisuals {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortDifficultyOptionEncounter_SpawnGroupProgression> SpawnGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortAIPawn> AIPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPhysicsAsset> PhysicsAsset;
    
    FORTNITEGAME_API FSpawnGroupVisuals();
};

