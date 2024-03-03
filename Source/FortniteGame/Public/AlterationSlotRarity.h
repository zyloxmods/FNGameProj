#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EFortRarity.h"
#include "AlterationSlotRarity.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FAlterationSlotRarity : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortRarity, int32> RarityWeights;
    
    FAlterationSlotRarity();
};

