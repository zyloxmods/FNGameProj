#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ECooldownTrackingType.h"
#include "FortHUDElementWidget.h"
#include "RadialBacchusButtonBase.generated.h"

class AFortPawn;

UCLASS(Blueprintable, EditInlineNew)
class URadialBacchusButtonBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TrackedCooldownTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECooldownTrackingType TrackingType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPawn* TrackedPawn;
    
public:
    URadialBacchusButtonBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDuration_Blueprint(float Remaining, float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCooldown_Blueprint();
    
    UFUNCTION(BlueprintCallable)
    void StopUpdateCooldown();
    
    UFUNCTION(BlueprintCallable)
    void StartUpdateCooldown();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetListenedGameplayTag(FGameplayTag InListenedTag);
    
protected:
    //UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
   // void ReceiveRadialProgressEvent_Blueprint(FName EventName, TEnumAsByte<EGameplayCueEvent::Type> EventType, const FGameplayCueParameters Parameters);
    
public:
    UFUNCTION(BlueprintCallable)
    void ReceiveRadialProgressEvent(FName EventName, TEnumAsByte<EGameplayCueEvent::Type> EventType, const FGameplayCueParameters& Parameters);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerPawnSet();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCooldownStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCooldownCompleted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActiveCooldown() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleUIGameplayCue(FName CueName, TEnumAsByte<EGameplayCueEvent::Type> EventType, const FGameplayCueParameters& Parameters);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingDuration() const;
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetListenedGameplayTag();
    
private:
    UFUNCTION(BlueprintCallable)
    void GameplayTagCallback(const FGameplayTag Tag, int32 NewCount);
    
};

