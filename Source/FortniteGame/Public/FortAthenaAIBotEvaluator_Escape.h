#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortAthenaAIBotEvaluator_Movement.h"
#include "FortAthenaAIBotEvaluator_Escape.generated.h"

UCLASS(Blueprintable)
class UFortAthenaAIBotEvaluator_Escape : public UFortAthenaAIBotEvaluator_Movement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EscapeTags;
    
public:
    UFortAthenaAIBotEvaluator_Escape();
};

