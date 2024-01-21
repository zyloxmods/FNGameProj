#pragma once
#include "CoreMinimal.h"
#include "EFortItemTier.h"
#include "OutpostFabricatorPerTheaterData.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FOutpostFabricatorPerTheaterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TheaterSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemTier MaxAllowedTier;
    
    FOutpostFabricatorPerTheaterData();
};

