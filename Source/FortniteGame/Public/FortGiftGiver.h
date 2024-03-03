#pragma once
#include "CoreMinimal.h"
#include "FortGiftingInfo.h"
#include "FortGiftGiver.generated.h"

USTRUCT(BlueprintType)
struct FFortGiftGiver : public FFortGiftingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumItemsGiven;
    
    FORTNITEGAME_API FFortGiftGiver();
};

