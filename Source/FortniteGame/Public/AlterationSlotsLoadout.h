#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AlterationSlot.h"
#include "AlterationSlotsLoadout.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FAlterationSlotsLoadout : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAlterationSlot> AlterationSlots;
    
    FAlterationSlotsLoadout();
};

