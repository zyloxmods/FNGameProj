#pragma once
#include "CoreMinimal.h"
#include "OutpostUpgradesPerTheaterData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FOutpostUpgradesPerTheaterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TheaterSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* OutpostUpgradesData;
    
    FORTNITEGAME_API FOutpostUpgradesPerTheaterData();
};

