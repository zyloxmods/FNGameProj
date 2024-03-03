#pragma once
#include "CoreMinimal.h"
#include "TieredModifierSetData.generated.h"

USTRUCT(BlueprintType)
struct FTieredModifierSetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaveNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ModifierDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ModifierLootTierGroup;
    
    FORTNITEGAME_API FTieredModifierSetData();
};

