#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "LimitedLifeDataEntry.h"
#include "LimitedLifeDataArray.generated.h"

USTRUCT(BlueprintType)
struct FLimitedLifeDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLimitedLifeDataEntry> Entries;
    
    FORTNITEGAME_API FLimitedLifeDataArray();
};

