#pragma once
#include "CoreMinimal.h"
#include "OnTimeHitCallbackDelegate.h"
#include "OnTimeHitInfo.generated.h"

USTRUCT(BlueprintType)
struct FOnTimeHitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimeHitCallback TimeCallback;
    
    FORTNITEGAME_API FOnTimeHitInfo();
};

