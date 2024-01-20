#pragma once
#include "CoreMinimal.h"
#include "FortWindImpulseHandle.generated.h"

USTRUCT(BlueprintType)
struct FFortWindImpulseHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UID;
    
public:
    FORTNITEGAME_API FFortWindImpulseHandle();
};

