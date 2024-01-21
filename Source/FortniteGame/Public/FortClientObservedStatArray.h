#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "FortClientObservedStat.h"
#include "FortClientObservedStatArray.generated.h"

class UStatManager;

USTRUCT(BlueprintType)
struct FFortClientObservedStatArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStatManager* MyStatManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortClientObservedStat> ObservedStats;
    
public:
    FORTNITEGAME_API FFortClientObservedStatArray();
};

