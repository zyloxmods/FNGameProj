#pragma once
#include "CoreMinimal.h"
#include "BCActionInfo.generated.h"

USTRUCT(BlueprintType)
struct FBCActionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Action;
    
    FORTNITEGAME_API FBCActionInfo();
};

