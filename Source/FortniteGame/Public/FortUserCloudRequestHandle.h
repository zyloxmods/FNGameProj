#pragma once
#include "CoreMinimal.h"
#include "FortUserCloudRequestHandle.generated.h"

USTRUCT(BlueprintType)
struct FFortUserCloudRequestHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint64 Handle;
    
public:
    FORTNITEGAME_API FFortUserCloudRequestHandle();
};

