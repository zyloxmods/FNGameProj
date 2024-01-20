#pragma once
#include "CoreMinimal.h"
#include "EFortInventoryFilter.h"
#include "EFortItemType.h"
#include "FortTabButtonLabelInfo.h"
#include "FortItemTransformFilterTabLabelInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortItemTransformFilterTabLabelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FilterTabNameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTabButtonLabelInfo TabButtonLabelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFortInventoryFilter> ItemFilters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemType ItemType;
    
    FORTNITEUI_API FFortItemTransformFilterTabLabelInfo();
};

