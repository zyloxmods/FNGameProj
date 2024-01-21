#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TieredModifierSetData.h"
#include "TieredModifierSet.generated.h"

USTRUCT(BlueprintType)
struct FTieredModifierSet : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTieredModifierSetData> ModifierData;
    
    FORTNITEGAME_API FTieredModifierSet();
};

