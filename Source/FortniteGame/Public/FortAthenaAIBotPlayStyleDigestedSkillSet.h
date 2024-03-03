#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "EDBNOPlayStyle.h"
#include "FortAthenaAIBotDigestedSkillSet.h"
#include "FortAthenaAIBotPlayStyleDigestedSkillSet.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortAthenaAIBotPlayStyleDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FScalableFloat AggressiveTowardsThreatWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FScalableFloat DefensiveTowardsThreatWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TrollingDetectDistanceSq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TrollingDetectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EDBNOPlayStyle DBNOPlayStyle;
    
public:
    UFortAthenaAIBotPlayStyleDigestedSkillSet();
};

