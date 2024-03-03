#pragma once
#include "CoreMinimal.h"
#include "FortAttributeFuelInterface.h"
#include "FortAttributeSet.h"
#include "FortGameplayAttributeData.h"
#include "FortJumpBoostSet.generated.h"

UCLASS(Blueprintable)
class UFortJumpBoostSet : public UFortAttributeSet, public IFortAttributeFuelInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData BoostActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData MaxFuel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Fuel, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Fuel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ReserveMaxFuel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReserveFuel, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ReserveFuel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData FuelBurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData FuelRegenRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData FuelRegenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData BoostFuelCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData UpwardThrust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData LateralThrust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData UpwardAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData LateralAcceleration;
    
    UFortJumpBoostSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReserveFuel(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Fuel(const FFortGameplayAttributeData& OldValue);
    
    
    // Fix for true pure virtual functions not being implemented
};

