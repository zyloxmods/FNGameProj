#pragma once
#include "CoreMinimal.h"
#include "OutpostPOSTBoost.h"
#include "OutpostPOSTPerTheaterData.generated.h"

USTRUCT(BlueprintType)
struct FOutpostPOSTPerTheaterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TheaterSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOutpostPOSTBoost POSTData;
    
    FORTNITEGAME_API FOutpostPOSTPerTheaterData();
};

