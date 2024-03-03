#pragma once
#include "CoreMinimal.h"
#include "UIExtension.h"
#include "GameplayTagContainer.h"
#include "GameFrameworkComponent.h"
#include "EventModeFocusActor.h"
#include "EventModeWidgetCachedData.h"
#include "FortGameFrameworkComponent_EventMode.generated.h"

class AActor;
class APawn;
class UFortWeaponItemDefinition;
class UInputComponent;
class UWidget;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UFortGameFrameworkComponent_EventMode : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortWeaponItemDefinition> ActivatorAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIExtension> UIExtensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftClassPtr<UWidget>> TaggedUIExtensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventModeFocusActor> FocusActors;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* InputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEventModeWidgetCachedData> CachedWidgetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> CurrentlyFocusedActor;
    
public:
    UFortGameFrameworkComponent_EventMode();
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerPawnPossessed(APawn* PossessedPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnExitVehicle();
    
    UFUNCTION(BlueprintCallable)
    void OnEnterVehicle();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFocusing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFocusAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsEventModeActive() const;
    
};

