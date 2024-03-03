#pragma once
#include "CoreMinimal.h"
#include "EFortItemInspectionMode.h"
#include "FortItemEntryPreviewData.generated.h"

USTRUCT(BlueprintType)
struct FFortItemEntryPreviewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemInspectionMode InspectMode;
    
    FORTNITEUI_API FFortItemEntryPreviewData();
};

