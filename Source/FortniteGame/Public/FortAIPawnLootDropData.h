#pragma once
#include "CoreMinimal.h"
#include "FortAIPawnLootDropData.generated.h"

USTRUCT(BlueprintType)
struct FFortAIPawnLootDropData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LootDropChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WorldItemTierGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WorldItemInstancedTierGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AccountItemTierGroup;
    
    FORTNITEGAME_API FFortAIPawnLootDropData();
};

