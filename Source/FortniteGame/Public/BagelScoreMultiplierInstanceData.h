#pragma once
#include "CoreMinimal.h"
#include "BagelScoreMultiplierInstanceData.generated.h"

class ABuildingActor;

USTRUCT(BlueprintType)
struct FBagelScoreMultiplierInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SpecialActorID;
    
    FORTNITEGAME_API FBagelScoreMultiplierInstanceData();
};

