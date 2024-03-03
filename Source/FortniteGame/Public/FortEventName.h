#pragma once
#include "CoreMinimal.h"
#include "FortEventName.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortEventName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    FFortEventName();
};

