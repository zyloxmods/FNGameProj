#pragma once
#include "CoreMinimal.h"
#include "ReplicatedStatValues.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FReplicatedStatValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScoreValue;
    
    FReplicatedStatValues();
};

