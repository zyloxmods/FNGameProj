#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Info.h"
#include "CameraAltitudeAdjustments.h"
#include "DayNightPhaseChangeBlueprintEventSignatureDelegate.h"
#include "DayNightPhaseChangeSignatureDelegate.h"
#include "DayPhaseInfo.h"
#include "EFortDayPhase.h"
#include "ExponentialHeightFogValues.h"
#include "FortInitializationInterface.h"
#include "Templates/SubclassOf.h"
#include "ThreatLocationInfo.h"
#include "TimeOfDayDirectOverrides.h"
#include "FortTimeOfDayManager.generated.h"

class AFortTimeOfDayManager;
class UDirectionalLightComponent;
class UExponentialHeightFogComponent;
class UFortDayPhaseChangeParams;
class UFortDayPhaseInfoOverride;
class UFortTimeOfDayWeatherComponent;
class UMaterialInstance;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UMaterialParameterCollectionInstance;
class UObject;
class UParticleSystemComponent;
class UPostProcessComponent;
class USkyLightComponent;
class UStaticMesh;
class UStaticMeshComponent;
class UTexture2D;

UCLASS(Blueprintable, NotPlaceable)
class AFortTimeOfDayManager : public AInfo, public IFortInitializationInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TimeOfDayInit, meta=(AllowPrivateAccess=true))
    float TimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TimeOfDay, meta=(AllowPrivateAccess=true))
    float TimeOfDayReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortDayPhase CurrentDayNightPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortDayPhase TransitionFromPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortDayPhase TransitionToPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TransitionBlendPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultTimeOfDaySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTimeOfDayInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TimeOfDaySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeOfDayAccumulationFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeOfDayAccumulator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BasePostProcessMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* PostProcessMaterialMID;
    
    UPROPERTY(DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 bHasClonedPPVs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSkipNight: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsePerDayPhaseSkylightCubemaps: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bTimeStarted: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HeightFogEnabled, meta=(AllowPrivateAccess=true))
    uint8 bHeightFogEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBaseHeightFogOnAltitude: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightFogZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraAltitudeAdjustments> AltitudeAdjustments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraAltitudeAdjustments> AltitudeAdjustmentsForSecondFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SunriseDirectionalLightRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SunsetDirectionalLightRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuat DirectionalLightQuat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SunriseSunObjectRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SunsetSunObjectRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SunObjectDivergencePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSkyAtmosphereRotationAndDivergence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SunriseSkyAtmosphereRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SunsetSkyAtmosphereRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkyAtmosphereRotationDivergencePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToSunOrMoon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartInvisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDirectionalLightComponent* DirectionalLightComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExponentialHeightFogComponent* ActiveHeightFogComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortDayPhaseChangeParams* DayPhaseChangeEventParams;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FDayPhaseInfo LightAndFogPhaseSettings[4];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortDayPhaseInfoOverride* LightAndFogPhaseSettingOverrides[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bBlendingInLightAndFogOverrides: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bBlendingOutLightAndFogOverrides: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortDayPhase BlendingOutLightAndFogOverridesDayPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LightAndFogOverridesFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentLightAndFogBlendValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DirectOverrides, meta=(AllowPrivateAccess=true))
    FTimeOfDayDirectOverrides DirectOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* MorningPostProcessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* DayPostProcessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* EveningPostProcessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* NightPostProcessComponent;
    
    UPROPERTY(DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* DayPhasePostProcessComponent[4];
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* OverridePostProcessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExponentialHeightFogValues CurrentTimeOfDayFogValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CurrentTimeOfDayDirectionalLightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MaterialParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollectionInstance* MaterialParameterCollectionInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RainParticleSystemRelativeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* SunMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* MoonMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> SunMaterialOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> MoonMaterialOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SunScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoonScale;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* SkyDomeMaterial;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* StarMapMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CloudMaskTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseStormValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor StormLightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* StormMaterialInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExponentialHeightFogValues StormFogValues;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDayNightPhaseChangeSignature OnDayPhaseChangeEvent;
    
private:
    UPROPERTY( EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDayNightPhaseChangeSignature> DelegatesQueuedForProcessingDayPhaseChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkyLightComponent* SkyLightComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* RainParticleSystemComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SunOrMoonMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SkyDomeMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StarMapMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ActiveSkyBoxMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* StarMapMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StormStrength;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortTimeOfDayWeatherComponent* WeatherComponent;
    
public:
    AFortTimeOfDayManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UnregisterForDayPhaseChangedEvent(UObject* EventReceiver);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSkipNight();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ToggleDebugForceStormEffects();
    
    UFUNCTION(BlueprintCallable)
    void SetUseSpecificTimeOfDayEditing(bool bShouldUseSpecificTimeOfDay);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTimeOfDaySpeedFloat(float InTimeOfDaySpeed);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void SetTimeOfDaySpeed(float TimeOfDaySpeedFactor);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTimeOfDayManagerVisibility(bool bVisible);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void SetTimeOfDayInHours(float TimeOfDayInHours);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTimeOfDayFloat(float TimeOfDayInHours);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void SetTimeOfDayAbsoluteSpeed(float NewTimeOfDaySpeed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetTimeOfDay(const FString& NewTimeOfDay);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetStormStrength(float NewStormStrength);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecificTimeOfDayInEditor(float NewTimeOfDayInEditor);
    
    UFUNCTION(BlueprintCallable)
    void SetPostProcessMaterialMIDEnabled(const bool bPostProcessEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetFogDirectionalInscatteringMultiplier(float NewFogDirectionalInscatteringMultiplier);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetDirectionalLightColorMultiplier(float NewDirectionalLightColorMultiplier);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void SetDayPhase(const FString& DayPhase);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RemoveLightAndFogPhaseSettingOverrideMulticast(EFortDayPhase DayPhase, float BlendOutLength);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLightAndFogPhaseSettingOverride(EFortDayPhase DayPhase, float BlendOutLength);
    
    UFUNCTION(BlueprintCallable)
    void RegisterForDayPhaseChangedEvent(FDayNightPhaseChangeBlueprintEventSignature DelegateSignature);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnWeatherStart(int32 WeatherEventIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnWeatherEnd(int32 WeatherEventIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnUpdateDirectionalLightForTimeOfDay(const FLinearColor& AboutToApplyDirectionalLightColor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnStormStart();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnStormEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TimeOfDayInit();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TimeOfDay();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HeightFogEnabled();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DirectOverrides();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnDayPhaseChange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExponentialHeightFogValues MakeExponentialHeightFogValues(float FogDensity, float FogHeightFalloff, float FogMaxOpacity, float StartDistance, float DirectionalInscatteringExponent, float DirectionalInscatteringStartDistance, FLinearColor DirectionalInscatteringColor, FLinearColor FogInscatteringColor, float VolumetricFogScatteringDistribution, float VolumetricFogExtinctionScale, float VolumetricFogDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFortTimeOfDayManager* GetTimeOfDayManagerFromContext(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FThreatLocationInfo> GetThreatClouds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    float GetStormStrength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortDayPhase GetPreviousDayPhase() const;
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void FFToTimeOfDay(float FastForwardTime, float FastForwardSpeed);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void FastForwardToTime_ByDuration(float FastForwardTimeOfDay, float FastForwardDuration, float RestoreSpeed);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void FastForwardToTime(float FastForwardTimeOfDay, float FastForwardSpeed, float RestoreSpeed);
    
    UFUNCTION(BlueprintCallable)
    void EndBlendLightAndFogPhaseSettingOverride();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakExponentialHeightFogValues(FExponentialHeightFogValues HeightFogValues, float& FogDensity, float& FogHeightFalloff, float& FogMaxOpacity, float& StartDistance, float& DirectionalInscatteringExponent, float& DirectionalInscatteringStartDistance, FLinearColor& DirectionalInscatteringColor, FLinearColor& FogInscatteringColor, float& VolumetricFogScatteringDistribution, float& VolumetricFogExtinctionScale, float& VolumetricFogDistance);
    
    UFUNCTION(BlueprintCallable)
    void BlendLightAndFogPhaseSettingOverride(float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDirectOverrides(const FTimeOfDayDirectOverrides& NewDirectOverrides);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void AddLightAndFogPhaseSettingOverrideMulticast(EFortDayPhase DayPhase, TSubclassOf<UFortDayPhaseInfoOverride> DayPhaseInfoOverride, float BlendInLength);
    
    UFUNCTION(BlueprintCallable)
    void AddLightAndFogPhaseSettingOverride(EFortDayPhase DayPhase, TSubclassOf<UFortDayPhaseInfoOverride> DayPhaseInfoOverride, float BlendInLength);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void WorldReady() override PURE_VIRTUAL(WorldReady,);
    
    UFUNCTION()
    bool NeedsWorldReady() const override PURE_VIRTUAL(NeedsWorldReady, return false;);
    
    UFUNCTION()
    void MatchStarted() override PURE_VIRTUAL(MatchStarted,);
    
};

