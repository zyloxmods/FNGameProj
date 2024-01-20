#pragma once
#include "CoreMinimal.h"
#include "AthenaMatchLootReward.generated.h"

USTRUCT(BlueprintType)
struct FAthenaMatchLootReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    FORTNITEGAME_API FAthenaMatchLootReward();
};

