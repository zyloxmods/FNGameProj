#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECreativeItemCategory.h"
#include "EFortItemCardSize.h"
#include "FortCreativeItemListCategoryData.generated.h"

USTRUCT(BlueprintType)
struct FFortCreativeItemListCategoryData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECreativeItemCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemCardSize CardSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollapseCardBorderPad;
    
    FORTNITEUI_API FFortCreativeItemListCategoryData();
};

