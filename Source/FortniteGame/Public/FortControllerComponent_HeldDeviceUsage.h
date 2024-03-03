#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent.h"
#include "FortControllerComponent_HeldDeviceUsage.generated.h"

class AActor;
class AFortWeapon;
class UFortBattleLabDeviceItemDefinition;
class UFortHeldObjectComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortControllerComponent_HeldDeviceUsage : public UFortControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortBattleLabDeviceItemDefinition* LastBattleLabDeviceItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortHeldObjectComponent* LastHeldObjectComponent;
    
public:
    UFortControllerComponent_HeldDeviceUsage();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUseBattleLabDevice(const UFortBattleLabDeviceItemDefinition* DeviceItemDef);
    
    UFUNCTION(BlueprintCallable)
    void QuestUpdate();
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PreviousWeapon);
    
    UFUNCTION(BlueprintCallable)
    void OnHeldObjectThrown();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldObjectPlaced();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldObjectDropped();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldObjectDestroy();
    
    UFUNCTION(BlueprintCallable)
    void DestroyDroppedDevice(AActor* DroppedDevice);
    
};

