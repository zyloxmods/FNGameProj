#pragma once
#include "CoreMinimal.h"
#include "FortItemInstanceQuantityPair.h"
#include "FortPhoenixLevelUpData.generated.h"

USTRUCT(BlueprintType)
struct FFortPhoenixLevelUpData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortItemInstanceQuantityPair> Rewards;
    
    FORTNITEGAME_API FFortPhoenixLevelUpData();
};

