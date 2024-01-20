#pragma once
#include "CoreMinimal.h"
#include "FortRiftReservationHandle.generated.h"

USTRUCT(BlueprintType)
struct FFortRiftReservationHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RiftReservationID;
    
public:
    FORTNITEGAME_API FFortRiftReservationHandle();
};

