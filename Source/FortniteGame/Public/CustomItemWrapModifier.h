#pragma once
#include "CoreMinimal.h"
#include "CustomCosmeticModifierBase.h"
#include "CustomItemWrapModifier.generated.h"

class AFortAthenaVehicle;
class AFortPlayerPawn;
class AFortWeapon;
class UMeshComponent;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class ACustomItemWrapModifier : public ACustomCosmeticModifierBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortAthenaVehicle> VehiclePtr;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortWeapon> WeaponPtr;
    
public:
    ACustomItemWrapModifier();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void PreDestruction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMeshComponent* GetWrappedMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortWeapon* GetWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortAthenaVehicle* GetVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerPawn* GetAssociatedPlayerPawn() const;
    
};

