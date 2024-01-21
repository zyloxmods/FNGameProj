#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "FortClientObservedStat.generated.h"

USTRUCT(BlueprintType)
struct FFortClientObservedStat : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 StatValue;
    
    FORTNITEGAME_API FFortClientObservedStat();
};

