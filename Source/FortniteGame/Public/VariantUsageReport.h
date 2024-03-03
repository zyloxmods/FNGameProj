#pragma once
#include "CoreMinimal.h"
#include "VariantUsageReportInner.h"
#include "VariantUsageReport.generated.h"

USTRUCT(BlueprintType)
struct FVariantUsageReport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVariantUsageReportInner> VariantUsage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalUses;
    
    FORTNITEGAME_API FVariantUsageReport();
};

