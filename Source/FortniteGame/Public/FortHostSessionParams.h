#pragma once
#include "CoreMinimal.h"
#include "FortHostSessionParams.generated.h"

USTRUCT(BlueprintType)
struct FFortHostSessionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SessionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControllerId;
    
    FORTNITEGAME_API FFortHostSessionParams();
};

