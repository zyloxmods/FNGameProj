#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CurieContainerHandle.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EFortDayPhase.h"
#include "EFortItemType.h"
#include "EVehicleEnteredCosmeticReaction.h"
#include "FortAthenaLoadout.h"
#include "CustomCosmeticModifierBase.generated.h"

class AFortPlayerPawn;
class AFortWeapon;
class IFortVehicleInterface;
class UFortVehicleInterface;
class UAthenaCosmeticItemDefinition;
class UFortItem;
class UObject;

UCLASS(Abstract, Blueprintable)
class ACustomCosmeticModifierBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CurieElementsToCareAbout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleEnteredCosmeticReaction EnteredVehicleSeatsToCareAbout;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerPawn> FortPlayerPawnPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsesDayPhaseChange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsesWeaponChangeDelegate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsesWeaponFire: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsesNewWeapon: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsesWeaponChange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsesCurieWhatsoever: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsesCurieAttach: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsesCurieDetach: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsesEnteredVehicle: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsesTargetingOrFirstPersonCameraChange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsesOnHitPawn: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bRegisteredForDayPhaseChange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bRegisteredForSkydiving: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bRegisteredForTargetingOrFirstPersonCamera: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bRegisteredForWeaponChanges: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bRegisteredForCurieChanges: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bRegisteredForNewWeapons: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bRegisteredForEnterVehicle: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bRegisteredOnHitPawn: 1;
    
public:
    ACustomCosmeticModifierBase();
    UFUNCTION(BlueprintCallable)
    void SetCosmeticActiveVariant(TSoftObjectPtr<UAthenaCosmeticItemDefinition> SoftCosmetic, const FGameplayTag& ChannelTag, const FGameplayTag& VariantTag);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void PreDestruction();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnWeaponFired();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponChanged(AFortWeapon* NewWeapon, AFortWeapon* OldWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnTargetingOrFirstPersonCameraChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnPostResIn();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerWeaponChanged(AFortWeapon* NewWeapon, AFortWeapon* OldWeapon);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnPawnSet();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnNewWeapons(const TArray<UFortItem*>& WeaponsAsItems);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewPlayerWeaponType(EFortItemType NewType, EFortItemType OldType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNativeCurieDetached(UObject* CurieOwner, FCurieContainerHandle ContainerHandle, const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    void OnNativeCurieAttached(UObject* CurieOwner, FCurieContainerHandle ContainerHandle, const FGameplayTag& Tag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitPawn(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnExitVehicle();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnEnterVehicle(const TScriptInterface<IFortVehicleInterface>& VehicleEntered);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnEndSkydiving();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurieStateDetached(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurieStateAttached(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnBeginSkydiving();
    
private:
    UFUNCTION(BlueprintCallable)
    void NativeWeaponFired(AFortWeapon* FiringWeapon);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnHitPawn(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void NativeExitedVehicle();
    
    UFUNCTION(BlueprintCallable)
    void NativeEnteredVehicle();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInFrontEnd() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSetFirstPersonCameraOrPawnTargetingChanged(bool bChanged);
    
public:
    UFUNCTION(BlueprintCallable)
    FFortAthenaLoadout GetLoadout();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerPawn* GetAssociatedPlayerPawn() const;
    
};

