#pragma once
#include "CoreMinimal.h"
#include "OutpostPOSTBoost.h"
#include "OutpostPOSTPerTheaterData.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FOutpostPOSTPerTheaterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TheaterSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOutpostPOSTBoost POSTData;
    
    FOutpostPOSTPerTheaterData();
};

