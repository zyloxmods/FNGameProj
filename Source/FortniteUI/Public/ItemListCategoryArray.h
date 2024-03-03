#pragma once
#include "CoreMinimal.h"
#include "FortItemEntry.h"
#include "ItemListCategoryArray.generated.h"

USTRUCT(BlueprintType)
struct FItemListCategoryArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortItemEntry> ItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryTitle;
    
    FORTNITEUI_API FItemListCategoryArray();
};

