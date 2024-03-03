#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EFortRarity.h"
#include "ItemCollectorRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FItemCollectorRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* OverrideItemsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRarity OverrideRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverrideGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bOverrideLootRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bUseOverrideRarity;
    
    FORTNITEGAME_API FItemCollectorRow();
};

