#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "GameplayTagContainer.h"
#include "FortQueryGenerator_MissionPlacementActors.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortQueryGenerator_MissionPlacementActors : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery MissionPlacementActorTagQuery;
    
public:
    UFortQueryGenerator_MissionPlacementActors();
};

