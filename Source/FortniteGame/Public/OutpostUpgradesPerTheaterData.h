#pragma once
#include "CoreMinimal.h"
#include "OutpostUpgradesPerTheaterData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FOutpostUpgradesPerTheaterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TheaterSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* OutpostUpgradesData;
    
    FOutpostUpgradesPerTheaterData();
};

