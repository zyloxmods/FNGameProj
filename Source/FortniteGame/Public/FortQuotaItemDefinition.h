#pragma once
#include "CoreMinimal.h"
#include "FortAccountItemDefinition.h"
#include "FortQuotaItemDefinition.generated.h"

UCLASS(Blueprintable)
class UFortQuotaItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnitsPerMinuteRechargeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RechargeDelayMinutes;
    
    UFortQuotaItemDefinition(const FObjectInitializer& ObjectInitializer);
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("Quota", GetFName());
    }
};

