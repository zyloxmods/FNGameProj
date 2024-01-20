#pragma once
#include "CoreMinimal.h"
#include "FortTaggedUnlockBase.h"
#include "FortTaggedDeployableBaseLootUnlock.generated.h"

USTRUCT(BlueprintType)
struct FFortTaggedDeployableBaseLootUnlock : public FFortTaggedUnlockBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LootTierGroup;
    
    FORTNITEGAME_API FFortTaggedDeployableBaseLootUnlock();
};

