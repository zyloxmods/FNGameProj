#pragma once
#include "CoreMinimal.h"
#include "FortChargingSet_Base.h"
#include "FortGameplayAttributeData.h"
#include "FortChargingSet_ArsenicCore_Dash.generated.h"

UCLASS(Blueprintable)
class UFortChargingSet_ArsenicCore_Dash : public UFortChargingSet_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentCharge, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData CurrentCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData MaxCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ServerTimeChargeIncrements;
    
public:
    UFortChargingSet_ArsenicCore_Dash();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentCharge(const FFortGameplayAttributeData& OldValue);
    
};

