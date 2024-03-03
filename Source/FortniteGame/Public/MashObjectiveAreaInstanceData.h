#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MashScoreMultiplierInstanceData.h"
#include "MashObjectiveAreaInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FMashObjectiveAreaInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* AreaActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SpecialActorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMashScoreMultiplierInstanceData> ScoreMultipliers;
    
    FORTNITEGAME_API FMashObjectiveAreaInstanceData();
};

