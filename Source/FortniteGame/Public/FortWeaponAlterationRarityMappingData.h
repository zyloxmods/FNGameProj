#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortWeaponAlterationRarityMappingData.generated.h"

USTRUCT(BlueprintType)
struct FFortWeaponAlterationRarityMappingData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SlotRarityValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LowSlotRarityValues;
    
    FORTNITEGAME_API FFortWeaponAlterationRarityMappingData();
};

