#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "FortBadgeCount.h"
#include "FortBadgeCountArray.generated.h"

USTRUCT(BlueprintType)
struct FFortBadgeCountArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortBadgeCount> Badges;
    
public:
    FORTNITEGAME_API FFortBadgeCountArray();
};

