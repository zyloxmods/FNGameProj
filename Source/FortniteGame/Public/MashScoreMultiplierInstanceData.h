#pragma once
#include "CoreMinimal.h"
#include "MashScoreMultiplierInstanceData.generated.h"

class ABuildingActor;

USTRUCT(BlueprintType)
struct FMashScoreMultiplierInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SpecialActorID;
    
    FORTNITEGAME_API FMashScoreMultiplierInstanceData();
};

