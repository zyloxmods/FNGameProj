#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "LimitedLifeDataEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FLimitedLifeDataEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* BackingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Lives;
    
    FORTNITEGAME_API FLimitedLifeDataEntry();
};

