#pragma once
#include "CoreMinimal.h"
#include "BagelLootTierOverrideAssetData.generated.h"

USTRUCT(BlueprintType)
struct FBagelLootTierOverrideAssetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SafeZoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TieredGroup;
    
    FORTNITEGAME_API FBagelLootTierOverrideAssetData();
};

