#pragma once
#include "CoreMinimal.h"
#include "FortTabButtonLabelInfo.h"
#include "FortAthenaItemManagementInventoryFilterTabLabelInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortAthenaItemManagementInventoryFilterTabLabelInfo : public FFortTabButtonLabelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FilterTabNameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowEmptySlotItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EmptyFilterDisplay;
    
    FORTNITEUI_API FFortAthenaItemManagementInventoryFilterTabLabelInfo();
};

