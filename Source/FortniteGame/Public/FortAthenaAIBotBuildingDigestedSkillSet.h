#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotDigestedSkillSet.h"
#include "FortAthenaAIBotBuildingDigestedSkillSet.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortAthenaAIBotBuildingDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DefensiveBuildingDelayBetweenBuilds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DefensiveBuildingDelayDeviationBetweenBuilds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ForceEquipBuildToolDuration;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DefensiveBuildingTemplateWeights[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StealWallTurboBuildDetectionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 StealWallAfterNumberOfTurboBuiltWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StealWallEfficiency;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StealWallBuildingTemplateWeights[5];
    
public:
    UFortAthenaAIBotBuildingDigestedSkillSet();
};

