#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortRefundDescriptionsData.generated.h"

USTRUCT(BlueprintType)
struct FFortRefundDescriptionsData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SearchString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetReleaseVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RefundDescriptionText;
    
    FORTNITEUI_API FFortRefundDescriptionsData();
};

