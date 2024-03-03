#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "InfiltrationCarryObjectCapturePoint.generated.h"

class AFortPlayerPawn;

UCLASS(Blueprintable)
class AInfiltrationCarryObjectCapturePoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UIShowDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UIDetailDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bCapturePointEnabled, meta=(AllowPrivateAccess=true))
    bool bCapturePointEnabled;
    
public:
    AInfiltrationCarryObjectCapturePoint();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopUpdatingUIVisibility();
    
    UFUNCTION(BlueprintCallable)
    void StartUpdatingUIVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOnIntelCapturedFX();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bCapturePointEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnPawnEndOverlap(AFortPlayerPawn* TouchingPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnBeginOverlap(AFortPlayerPawn* TouchingPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewUIVisibilityState(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewUIDetailState(bool bDetailed);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastIntelCaptured();
    
protected:
    UFUNCTION(BlueprintCallable)
    void IntelTagCallback(const FGameplayTag Tag, int32 NewCount);
    
};

