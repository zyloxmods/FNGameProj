#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator.h"
#include "FortAthenaAIBotEvaluator_JumpOffBus.generated.h"

class AFortGameStateAthena;
class AFortPoiVolume;
class UFortAthenaAIBotMovementDigestedSkillSet;

UCLASS(Blueprintable)
class UFortAthenaAIBotEvaluator_JumpOffBus : public UFortAthenaAIBotEvaluator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JumpOffBusDestinationName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JumpOffBusDestinationVolumeKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPoiVolume* BusDroppingVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameStateAthena* CachedAthenaGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementDigestedSkillSet;
    
public:
    UFortAthenaAIBotEvaluator_JumpOffBus();
};

