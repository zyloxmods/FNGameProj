#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFortHotSpotSlot.h"
#include "AIHotSpotSlotConfig.generated.h"

USTRUCT(BlueprintType)
struct FAIHotSpotSlotConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortHotSpotSlot SlotType;
    
    FORTNITEGAME_API FAIHotSpotSlotConfig();
};

