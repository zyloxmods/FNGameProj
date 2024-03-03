#pragma once
#include "CoreMinimal.h"
#include "AnimClassStats.generated.h"

USTRUCT(BlueprintType)
struct FAnimClassStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnimClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> StatValues;
    
    FORTNITEGAME_API FAnimClassStats();
};

