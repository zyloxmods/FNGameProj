#pragma once
#include "CoreMinimal.h"
#include "FortItemCard_StackCountBlock_Configuration.h"
#include "FortItemCard_XXS_ItemInstance_Configuration.generated.h"

USTRUCT(BlueprintType)
struct FFortItemCard_XXS_ItemInstance_Configuration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortItemCard_StackCountBlock_Configuration StackCountBlock;
    
    FORTNITEUI_API FFortItemCard_XXS_ItemInstance_Configuration();
};

