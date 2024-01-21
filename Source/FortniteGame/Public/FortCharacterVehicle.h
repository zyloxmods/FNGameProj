#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortAttributeInitializationKey.h"
#include "FortPlayerPawnAthena.h"
#include "FortVehicleInterface.h"
#include "Templates/SubclassOf.h"
#include "VehicleHealthChangedDelegate.h"
#include "FortCharacterVehicle.generated.h"

class UAbilitySystemComponent;
class UAnimInstance;
class UFortAbilitySet;
class UFortAbilitySystemComponent;
class UFortCameraMode;
class UFortOstrichSet;
class UFortVehicleSeatComponent;

UCLASS(Blueprintable)
class AFortCharacterVehicle : public AFortPlayerPawnAthena, public IFortVehicleInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVehicleSeatComponent* VehicleSeatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, ReplicatedUsing=OnRep_OverrideAbilitySystemComponent, meta=(AllowPrivateAccess=true))
    UFortAbilitySystemComponent* OverrideAbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAttributeInitializationKey AttributeInitKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> DriverAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> PassengerAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasAnyMountedWeaponSeats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortOstrichSet* OstrichSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer VehicleTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAbilitySet* StartupAbilitySet;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleHealthChanged OnHealthChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode> CameraModeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode> PassengerCameraModeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpBoostDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinBoostDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBoostDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FullyChargedJumpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinHoldDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DriverExitLaunchScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PassengerExitLaunchScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float JumpPressTime;
    
public:
    AFortCharacterVehicle();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_OverrideAbilitySystemComponent();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAbilitySystemComponent* GetAbilitySystemComponent() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

