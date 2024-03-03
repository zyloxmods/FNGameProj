#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BagelScoreMultiplierInstanceData.h"
#include "BagelObjectiveAreaInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FBagelObjectiveAreaInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* AreaActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SpecialActorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBagelScoreMultiplierInstanceData> ScoreMultipliers;
    
    FORTNITEGAME_API FBagelObjectiveAreaInstanceData();
};

