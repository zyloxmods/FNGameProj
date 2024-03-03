#pragma once
#include "CoreMinimal.h"
#include "CustomCosmeticModifierBase.h"
#include "CustomItemWrapModifier.generated.h"

class AActor;
class AFortWeapon;
class UAudioComponent;
class UMeshComponent;

UCLASS(Abstract, Blueprintable)
class ACustomItemWrapModifier : public ACustomCosmeticModifierBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> VehiclePtr;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortWeapon> WeaponPtr;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMeshComponent> MeshPtr;
    
public:
    ACustomItemWrapModifier();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void NotifyAudioComponentVehicleTriggered(UAudioComponent* AudioComponent, int32 Priority);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void NotifyAudioComponentAdded(UAudioComponent* AudioComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMeshComponent* GetWrappedMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortWeapon* GetWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetVehicle() const;
    
};

