#pragma once
#include "CoreMinimal.h"
#include "EAthenaCustomizationCategory.h"
#include "FortCosmeticLockerSlots.h"
#include "FortCosmeticLockerSlotData.generated.h"

USTRUCT(BlueprintType)
struct FFortCosmeticLockerSlotData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAthenaCustomizationCategory, FFortCosmeticLockerSlots> Slots;
    
    FORTNITEGAME_API FFortCosmeticLockerSlotData();
};

