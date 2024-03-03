#pragma once
#include "CoreMinimal.h"
#include "CurieContainerHandle.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EFortCurieToggleComponentActivationBehavior.h"
#include "EFortCurieToggleComponentDeactivationBehavior.h"
#include "FortCurieToggleComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortCurieToggleComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActivationElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCurieToggleComponentActivationBehavior ActivationBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCurieToggleComponentDeactivationBehavior DeactivationBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeactivationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ToggleGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimedDeactivationHandle;
    
public:
    UFortCurieToggleComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInactive();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnElementDetached(UObject* InOwner, FCurieContainerHandle ContainerHandle, const FGameplayTag& ElementIdentifier);
    
    UFUNCTION(BlueprintCallable)
    void OnElementAttached(UObject* InOwner, FCurieContainerHandle ContainerHandle, const FGameplayTag& ElementIdentifier);
    
    UFUNCTION(BlueprintCallable)
    void OnElementApplied(UObject* InOwner, FCurieContainerHandle ContainerHandle, const FGameplayTag& ElementIdentifier);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActive();
    
};

