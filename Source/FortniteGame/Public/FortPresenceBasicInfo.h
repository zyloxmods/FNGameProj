#pragma once
#include "CoreMinimal.h"
#include "FortPresenceBasicInfo.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortPresenceBasicInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HomeBaseRating;
    
    FFortPresenceBasicInfo();
};

