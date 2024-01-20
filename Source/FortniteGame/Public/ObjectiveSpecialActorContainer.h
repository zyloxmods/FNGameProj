#pragma once
#include "CoreMinimal.h"
#include "ObjectiveSpecialActorContainer.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FObjectiveSpecialActorContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TheSpawnedObjective;
    
    FORTNITEGAME_API FObjectiveSpecialActorContainer();
};

