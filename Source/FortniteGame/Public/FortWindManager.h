#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "FortInitializationInterface.h"
#include "FortWindImpulseCylinder.h"
#include "FortWindImpulseCylinderDelta.h"
#include "FortWindImpulseHandle.h"
#include "FortWindImpulseRadius.h"
#include "FortWindResponder.h"
#include "FortWindManager.generated.h"

class ABuildingSMActor;
class AFortWindManager;
class UAudioComponent;
class UMaterialInterface;
class UObject;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class AFortWindManager : public AActor, public IFortInitializationInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAllowWindImpulses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAllowResponderAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SectionWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumSectionBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> MaterialDefiningParametersToInterpolate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WindVectorParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> WindOffsetMaterialParameterNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> WindSpeedMaterialParameterNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> WindMaterialScalarParameterNamesToInterpolate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> WindMaterialVectorParameterNamesToInterpolate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortWindImpulseRadius> WindImpulses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortWindImpulseCylinderDelta> WindImpulseCylinderDeltas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortWindImpulseCylinder> WindImpulseCylinders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortWindResponder> WindResponders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> NearbyCacheIndicesForAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> NearbyCacheIndicesForUpdates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NextNearbyIndexToUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortWindResponder ActiveAudioWindResponder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<ABuildingSMActor*, UAudioComponent*> WindActorToWindResponderAudioMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AudioWindSpeedParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioWindInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioWindMaxResponderDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateWindMaxResponderDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewerMovementDistanceForRefresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAudioComponent*> WindAudioComponentPool;
    
public:
    AFortWindManager();
    UFUNCTION(BlueprintCallable)
    bool SetWindImpulseCylinderMagnitude(const FFortWindImpulseHandle& ImpulseHandle, float NewMagnitude, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    bool SetWindImpulse(const FFortWindImpulseHandle& ImpulseHandle, const FFortWindImpulseRadius& WindImpulse);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveWindParticleSystemComponent(UParticleSystemComponent* ParticleSystemComponent);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWindImpulse(const FFortWindImpulseHandle& ImpulseHandle, float BlendTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWorldReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWindImpulseCylinderDeltaComplete(const FFortWindImpulseCylinder& WindImpulseCylinder);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWindImpulseCylinderDeath(const FFortWindImpulseCylinder& WindImpulseCylinder);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWindImpulseCylinderCreation(const FFortWindImpulseCylinder& WindImpulseCylinder, const FFortWindImpulseCylinderDelta& WindImpulseCylinderDelta);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWindAudioBecameInactive(UAudioComponent* WindAudioComp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWindAudioBecameActive(UAudioComponent* WindAudioComp);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFortWindImpulseRadius MakeWindImpulseRadius(const FVector& ImpulseLocation, float ImpulseRadius, float ImpulseMagnitude, float ImpulseBlendTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFortWindImpulseCylinder MakeWindImpulseCylinder(const FVector& ImpulseLocation, float ImpulseInnerRadius, float ImpulseOuterRadius, float ImpulseMagnitude, const FVector& ImpulseDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasWindImpulse(const FFortWindImpulseHandle& WindImpulseHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFortWindManager* GetWindManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetGlobalWindIntensityAndDirection(float& WindIntensity, FVector& WindDirection) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentWindImpulseCylinderDelta(FFortWindImpulseCylinder& WindImpulseCylinder, FFortWindImpulseCylinderDelta& WindImpulseCylinderDelta) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakWindImpulseRadius(const FFortWindImpulseRadius& InWindImpulseRadius, FVector& ImpulseLocation, float& ImpulseRadius, float& ImpulseMagnitude, float& ImpulseBlendTime);
    
    UFUNCTION(BlueprintCallable)
    static void BreakWindImpulseCylinderDelta(const FFortWindImpulseCylinderDelta& WindImpulseCylinderDelta, FVector& WindDeltaCenter, bool& bWindImpulseInitialized, bool& bWindRipplesOutward, float& WindDeltaSectionWidth, float& WindDeltaInnerSectionRadius, float& WindDeltaOuterSectionRadius, float& WindDeltaMaximumRadius, float& WindDeltaDesiredOverallBlendTime, float& WindDeltaSectionBlendTime, float& WindDeltaSectionCurrentBlendTime, float& WindDeltaPreviousMagnitude, float& WindDeltaSectionCurrentMagnitude, float& WindDeltaDesiredMagnitude, FBox& WindDeltaOuterWorldBounds, FBox& WindDeltaInnerWorldBounds, FBox& WindImpulseBounds, FFortWindImpulseHandle& WindImpulseHandleToModify);
    
    UFUNCTION(BlueprintCallable)
    static void BreakWindImpulseCylinderAdvanced(const FFortWindImpulseCylinder& WindImpulseCylinder, FVector& WindLocation, float& WindInnerRadius, float& WindOuterRadius, FVector& WindWorldDirection, float& WindMagnitude, FBox& WindWorldBounds, bool& bIsWindChanging, bool& bIsWindChangePending);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakWindImpulseCylinder(const FFortWindImpulseCylinder& InWindImpulseCylinder, FVector& ImpulseLocation, float& ImpulseInnerRadius, float& ImpulseOuterRadius, float& ImpulseMagnitude, FVector& ImpulseDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddWindParticleSystemComponent(UParticleSystemComponent* ParticleSystemComponent);
    
    UFUNCTION(BlueprintCallable)
    FFortWindImpulseHandle AddWindImpulseCylinder(const FFortWindImpulseCylinder& WindImpulseCylinder, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    FFortWindImpulseHandle AddWindImpulse(const FFortWindImpulseRadius& WindImpulse);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void WorldReady() override PURE_VIRTUAL(WorldReady,);
    
    UFUNCTION()
    bool NeedsWorldReady() const override PURE_VIRTUAL(NeedsWorldReady, return false;);
    
    UFUNCTION()
    void MatchStarted() override PURE_VIRTUAL(MatchStarted,);
    
};

