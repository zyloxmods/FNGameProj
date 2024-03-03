#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortAthenaAIBotSkillSet.h"
#include "FortAthenaAIBotHarvestSkillSet.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAIBotHarvestSkillSet : public UFortAthenaAIBotSkillSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DelayBetweenHarvest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DeviationTimeBetweenHarvest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HarvestingMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WeakSpotHitProbability;
    
public:
    UFortAthenaAIBotHarvestSkillSet();
};

