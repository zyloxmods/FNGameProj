#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator.h"
#include "FortAthenaAIBotEvaluator_DefensiveBuilding.generated.h"

class UFortAthenaAIBotBuildingDigestedSkillSet;

UCLASS(Blueprintable)
class UFortAthenaAIBotEvaluator_DefensiveBuilding : public UFortAthenaAIBotEvaluator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefensiveBuildTypeName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefensiveBuildGridCoordName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotBuildingDigestedSkillSet* CacheBuildingDigestedSkillSet;
    
public:
    UFortAthenaAIBotEvaluator_DefensiveBuilding();
};

