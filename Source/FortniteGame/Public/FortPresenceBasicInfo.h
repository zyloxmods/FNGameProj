#pragma once
#include "CoreMinimal.h"
#include "FortPresenceBasicInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortPresenceBasicInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HomeBaseRating;
    
    FORTNITEGAME_API FFortPresenceBasicInfo();
};

