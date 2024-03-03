#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortItemQuantityPair.h"
#include "AlterationSlotDefinition.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FAlterationSlotDefinition : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InitTierGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortItemQuantityPair> BaseRespecCosts;
    
    FAlterationSlotDefinition();
};

