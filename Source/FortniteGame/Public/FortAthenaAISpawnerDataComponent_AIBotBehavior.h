#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent_Behavior.h"
#include "FortAthenaAISpawnerDataComponent_AIBotBehavior.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_AIBotBehavior : public UFortAthenaAISpawnerDataComponent_Behavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanUseFallbackPatrolAround: 1;
    
public:
    UFortAthenaAISpawnerDataComponent_AIBotBehavior();
};

