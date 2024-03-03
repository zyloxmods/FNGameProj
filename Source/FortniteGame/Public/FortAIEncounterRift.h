#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortRiftReservationHandle.h"
#include "FortAIEncounterRift.generated.h"

class ABuildingRift;

USTRUCT(BlueprintType)
struct FFortAIEncounterRift {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QueryID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RiftLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingRift* RiftActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRiftReservationHandle RiftReservationHandle;
    
    FORTNITEGAME_API FFortAIEncounterRift();
};

