#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "VariantUsageReportInner.generated.h"

USTRUCT(BlueprintType)
struct FVariantUsageReportInner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ChannelTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VariantTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UseCount;
    
    FORTNITEGAME_API FVariantUsageReportInner();
};

