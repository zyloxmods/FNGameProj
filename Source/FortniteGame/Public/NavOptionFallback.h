#pragma once
#include "CoreMinimal.h"
#include "ENavOptionFallbackDir.h"
#include "NavOptionFallback.generated.h"

class AFortEventLevelNavigationActor;

USTRUCT(BlueprintType)
struct FNavOptionFallback {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENavOptionFallbackDir NavDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortEventLevelNavigationActor* NavObj;
    
    FORTNITEGAME_API FNavOptionFallback();
};

