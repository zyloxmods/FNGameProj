#pragma once
#include "CoreMinimal.h"
#include "FortChargingSet_Base.h"
#include "FortGameplayAttributeData.h"
#include "FortChargingSet_Kaboom.generated.h"

UCLASS(Blueprintable)
class UFortChargingSet_Kaboom : public UFortChargingSet_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Charge, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Charge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData MaxCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ChargeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ServerTimeChargeIncrements;
    
    UFortChargingSet_Kaboom();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Charge(const FFortGameplayAttributeData& OldValue);
    
};

