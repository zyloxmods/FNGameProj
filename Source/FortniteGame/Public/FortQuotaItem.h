#pragma once
#include "CoreMinimal.h"
#include "FortAccountItem.h"
#include "FortQuotaItem.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortQuotaItem : public UFortAccountItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float current_value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString last_mod_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 units_per_minute_recharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 max_quota;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 recharge_delay_minutes;
    
    UFortQuotaItem();
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentQuotaAmount();
    
};

