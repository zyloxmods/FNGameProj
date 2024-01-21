#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AlterationWeightSet.h"
#include "EFortRarity.h"
#include "AlterationGroup.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FAlterationGroup : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortRarity, FAlterationWeightSet> RarityMapping;
    
    FAlterationGroup();
};

