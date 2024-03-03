#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator_TagQuery.h"
#include "FortAthenaAIBotEvaluator_TagQueryToBBKey.generated.h"

UCLASS(Blueprintable)
class UFortAthenaAIBotEvaluator_TagQueryToBBKey : public UFortAthenaAIBotEvaluator_TagQuery {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LinkedBBKeyName;
    
public:
    UFortAthenaAIBotEvaluator_TagQueryToBBKey();
};

