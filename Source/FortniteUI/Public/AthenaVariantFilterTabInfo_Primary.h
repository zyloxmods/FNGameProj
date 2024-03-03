#pragma once
#include "CoreMinimal.h"
#include "AthenaVariantFilterTabInfo.h"
#include "AthenaVariantFilterTabInfo_Primary.generated.h"

USTRUCT(BlueprintType)
struct FAthenaVariantFilterTabInfo_Primary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaVariantFilterTabInfo PrimaryTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaVariantFilterTabInfo> SubTabs;
    
    FORTNITEUI_API FAthenaVariantFilterTabInfo_Primary();
};

