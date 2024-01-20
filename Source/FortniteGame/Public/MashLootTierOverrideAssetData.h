#pragma once
#include "CoreMinimal.h"
#include "MashLootTierOverrideAssetData.generated.h"

USTRUCT(BlueprintType)
struct FMashLootTierOverrideAssetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SafeZoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TieredGroup;
    
    FORTNITEGAME_API FMashLootTierOverrideAssetData();
};

