#pragma once
#include "CoreMinimal.h"
#include "FortTabButtonLabelInfo.h"
#include "FortItemManagementInventoryFilterTabLabelInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortItemManagementInventoryFilterTabLabelInfo : public FFortTabButtonLabelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FilterTabNameId;
    
    FORTNITEUI_API FFortItemManagementInventoryFilterTabLabelInfo();
};

