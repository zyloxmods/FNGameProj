#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MashScoreMultiplierInstanceData.h"
#include "MashObjectiveAreaInstanceData.generated.h"

class AActor;
class ABuildingActor;

USTRUCT(BlueprintType)
struct FMashObjectiveAreaInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingActor* Beacon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Encampment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMashScoreMultiplierInstanceData> ScoreMultipliers;
    
    FORTNITEGAME_API FMashObjectiveAreaInstanceData();
};

