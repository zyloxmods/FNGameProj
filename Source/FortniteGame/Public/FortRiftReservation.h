#pragma once
#include "CoreMinimal.h"
#include "FortRiftReservationHandle.h"
#include "FortRiftReservation.generated.h"

USTRUCT(BlueprintType)
struct FFortRiftReservation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDesiredVisible: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDesiredActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRiftReservationHandle ReservationHandle;
    
    FORTNITEGAME_API FFortRiftReservation();
};

