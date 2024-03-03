#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuildingProp.h"
#include "BuildingPropAtlas.generated.h"

class UAudioComponent;
class UMaterialInstanceDynamic;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ABuildingPropAtlas : public ABuildingProp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Ring1Comp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Ring2Comp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Ring3Comp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* RingTransitionMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* PortalAudioComp;
    
public:
    ABuildingPropAtlas();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StopRingSpinning();
    
    UFUNCTION(BlueprintCallable)
    void SetupAnimationTransition(UMaterialInstanceDynamic* Mid, FName ParamName, float InTransitionTime);
    
    UFUNCTION(BlueprintCallable)
    void SetupAnimationSpeed(float InActivationTime, float InTotalDefenseTime, float InAnimSpeedStart, float InAnimSpeedEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RestoreRingsHierarchy();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayRingsReset(float AnimDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayRingSpinning(const FRotator& Ring1RateMin, const FRotator& Ring1RateMax, const FRotator& Ring2Rate, const FRotator& Ring3Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayRingsIdleLoop(float AnimDuration, float Ring1ZOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayRingDamage(float DurationMin, float DurationMax, float MagnitudeMin, float MagnitudeMax);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnRingSpinningLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void InitializeRings(UPrimitiveComponent* InRing1Comp, UPrimitiveComponent* InRing2Comp, UPrimitiveComponent* InRing3Comp);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void InitializeAudio(UAudioComponent* InPortalLoopingComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefenseProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefenseAnimSpeed() const;
    
};

