#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OutpostCraftingTableData.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FOutpostCraftingTableData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequiredItems;
    
    FOutpostCraftingTableData();
};

