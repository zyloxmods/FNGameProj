#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator_TagQuery.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaAIBotEvaluator_DangerDetection.generated.h"

class UFortAthenaAIBotMovementDigestedSkillSet;
class UFortNavArea;
class UNavigationQueryFilter;

UCLASS(Blueprintable)
class UFortAthenaAIBotEvaluator_DangerDetection : public UFortAthenaAIBotEvaluator_TagQuery {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortNavArea> DangerNavAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToCheckForDangerAfterValidQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> SafeLocationFilterClass;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DangerZoneDetectedExecutionStatusName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DangerZoneDetectedSafeLocationKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotMovementDigestedSkillSet* CachedMovementSkillSet;
    
public:
    UFortAthenaAIBotEvaluator_DangerDetection();
};

