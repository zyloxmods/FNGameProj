#pragma once
#include "CoreMinimal.h"
#include "AthenaVariantFilterTabInfo_Primary.h"
#include "AthenaVariantFilterSet.generated.h"

USTRUCT(BlueprintType)
struct FAthenaVariantFilterSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaVariantFilterTabInfo_Primary> PrimaryTabs;
    
    FORTNITEUI_API FAthenaVariantFilterSet();
};

