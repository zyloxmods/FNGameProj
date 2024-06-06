#include "FortTimeOfDayManager.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/PostProcessComponent.h"
#include "Components/SkyLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void AFortTimeOfDayManager::UnregisterForDayPhaseChangedEvent(UObject* EventReceiver) {
}

void AFortTimeOfDayManager::ToggleSkipNight() {
}

void AFortTimeOfDayManager::ToggleDebugForceStormEffects() {
}

void AFortTimeOfDayManager::SetUseSpecificTimeOfDayEditing(bool bShouldUseSpecificTimeOfDay) {
}

void AFortTimeOfDayManager::SetTimeOfDaySpeedFloat(float InTimeOfDaySpeed) {
}

void AFortTimeOfDayManager::SetTimeOfDaySpeed(float TimeOfDaySpeedFactor) {
}

void AFortTimeOfDayManager::SetTimeOfDayManagerVisibility(bool bVisible) {
}

void AFortTimeOfDayManager::SetTimeOfDayInHours(float TimeOfDayInHours) {
}

void AFortTimeOfDayManager::SetTimeOfDayFloat(float TimeOfDayInHours) {
}

void AFortTimeOfDayManager::SetTimeOfDayAbsoluteSpeed(float NewTimeOfDaySpeed) {
}

void AFortTimeOfDayManager::SetTimeOfDay(const FString& NewTimeOfDay) {
}

void AFortTimeOfDayManager::SetStormStrength(float NewStormStrength) {
}

void AFortTimeOfDayManager::SetSpecificTimeOfDayInEditor(float NewTimeOfDayInEditor) {
}

void AFortTimeOfDayManager::SetPostProcessMaterialMIDEnabled(const bool bPostProcessEnabled) {
}

void AFortTimeOfDayManager::SetFogDirectionalInscatteringMultiplier(float NewFogDirectionalInscatteringMultiplier) {
}

void AFortTimeOfDayManager::SetDirectionalLightColorMultiplier(float NewDirectionalLightColorMultiplier) {
}

void AFortTimeOfDayManager::SetDayPhase(const FString& DayPhase) {
}

void AFortTimeOfDayManager::RemoveLightAndFogPhaseSettingOverrideMulticast_Implementation(EFortDayPhase DayPhase, float BlendOutLength) {
}

void AFortTimeOfDayManager::RemoveLightAndFogPhaseSettingOverride(EFortDayPhase DayPhase, float BlendOutLength) {
}

void AFortTimeOfDayManager::RegisterForDayPhaseChangedEvent(FDayNightPhaseChangeBlueprintEventSignature DelegateSignature) {
}






void AFortTimeOfDayManager::OnRep_TimeOfDayInit() {
}

void AFortTimeOfDayManager::OnRep_TimeOfDay() {
}

void AFortTimeOfDayManager::OnRep_HeightFogEnabled() {
}

void AFortTimeOfDayManager::OnRep_DirectOverrides() {
}


FExponentialHeightFogValues AFortTimeOfDayManager::MakeExponentialHeightFogValues(float FogDensity, float FogHeightFalloff, float FogMaxOpacity, float StartDistance, float DirectionalInscatteringExponent, float DirectionalInscatteringStartDistance, FLinearColor DirectionalInscatteringColor, FLinearColor FogInscatteringColor, float VolumetricFogScatteringDistribution, float VolumetricFogExtinctionScale, float VolumetricFogDistance) {
    return FExponentialHeightFogValues{};
}

AFortTimeOfDayManager* AFortTimeOfDayManager::GetTimeOfDayManagerFromContext(UObject* WorldContextObject) {
    return NULL;
}

TArray<FThreatLocationInfo> AFortTimeOfDayManager::GetThreatClouds() const {
    return TArray<FThreatLocationInfo>();
}

float AFortTimeOfDayManager::GetStormStrength() const {
    return 0.0f;
}

EFortDayPhase AFortTimeOfDayManager::GetPreviousDayPhase() const {
    return EFortDayPhase::Morning;
}

void AFortTimeOfDayManager::FFToTimeOfDay(float FastForwardTime, float FastForwardSpeed) {
}

void AFortTimeOfDayManager::FastForwardToTime_ByDuration(float FastForwardTimeOfDay, float FastForwardDuration, float RestoreSpeed) {
}

void AFortTimeOfDayManager::FastForwardToTime(float FastForwardTimeOfDay, float FastForwardSpeed, float RestoreSpeed) {
}

void AFortTimeOfDayManager::EndBlendLightAndFogPhaseSettingOverride() {
}

void AFortTimeOfDayManager::BreakExponentialHeightFogValues(FExponentialHeightFogValues HeightFogValues, float& FogDensity, float& FogHeightFalloff, float& FogMaxOpacity, float& StartDistance, float& DirectionalInscatteringExponent, float& DirectionalInscatteringStartDistance, FLinearColor& DirectionalInscatteringColor, FLinearColor& FogInscatteringColor, float& VolumetricFogScatteringDistribution, float& VolumetricFogExtinctionScale, float& VolumetricFogDistance) {
}

void AFortTimeOfDayManager::BlendLightAndFogPhaseSettingOverride(float Alpha) {
}

void AFortTimeOfDayManager::ApplyDirectOverrides(const FTimeOfDayDirectOverrides& NewDirectOverrides) {
}

void AFortTimeOfDayManager::AddLightAndFogPhaseSettingOverrideMulticast_Implementation(EFortDayPhase DayPhase, TSubclassOf<UFortDayPhaseInfoOverride> DayPhaseInfoOverride, float BlendInLength) {
}

void AFortTimeOfDayManager::AddLightAndFogPhaseSettingOverride(EFortDayPhase DayPhase, TSubclassOf<UFortDayPhaseInfoOverride> DayPhaseInfoOverride, float BlendInLength) {
}

void AFortTimeOfDayManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortTimeOfDayManager, TimeOfDay);
    DOREPLIFETIME(AFortTimeOfDayManager, TimeOfDayReplicated);
    DOREPLIFETIME(AFortTimeOfDayManager, TimeOfDaySpeed);
    DOREPLIFETIME(AFortTimeOfDayManager, bTimeStarted);
    DOREPLIFETIME(AFortTimeOfDayManager, bHeightFogEnabled);
    DOREPLIFETIME(AFortTimeOfDayManager, DirectOverrides);
}

AFortTimeOfDayManager::AFortTimeOfDayManager() {
    TimeOfDay = 1;
    TimeOfDayReplicated = 1;
    CurrentDayNightPhase = EFortDayPhase::Day;
    TransitionFromPhase = EFortDayPhase::Day;
    TransitionToPhase = EFortDayPhase::Day;
    TransitionBlendPercent = 1;
    DefaultTimeOfDaySpeed = 1;
    StartTimeOfDayInGame = 1;
    TimeOfDaySpeed = 1;
    MaxTimeOfDayAccumulationFactor = 1;
    TimeOfDayAccumulator = 1;
    BasePostProcessMaterial = NULL;
    PostProcessMaterialMID = NULL;
    bHasClonedPPVs = 0;
    bSkipNight = false;
    bUsePerDayPhaseSkylightCubemaps = false;
    bTimeStarted = false;
    bHeightFogEnabled = false;
    bBaseHeightFogOnAltitude = true;
    HeightFogZOffset = 1;
    SunObjectDivergencePower = 1;
    bUseSkyAtmosphereRotationAndDivergence = false;
    SkyAtmosphereRotationDivergencePower = 1;
    DistanceToSunOrMoon = 1;
    bStartInvisible = false;
    DirectionalLightComponent = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("DayNightDirectionalLightComponent"));
    ActiveHeightFogComponent = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("ActiveHeightFogComponent"));
    DayPhaseChangeEventParams = NULL;
    LightAndFogPhaseSettingOverrides[0] = NULL;
    LightAndFogPhaseSettingOverrides[1] = NULL;
    LightAndFogPhaseSettingOverrides[2] = NULL;
    LightAndFogPhaseSettingOverrides[3] = NULL;
    bBlendingInLightAndFogOverrides = false;
    bBlendingOutLightAndFogOverrides = false;
    BlendingOutLightAndFogOverridesDayPhase = EFortDayPhase::NumPhases;
    LightAndFogOverridesFadeTime = 1;
    CurrentLightAndFogBlendValue = 1;
    MorningPostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("MorningPostProcessComponent"));
    DayPostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("DayPostProcessComponent"));
    EveningPostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("EveningPostProcessComponent"));
    NightPostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("NightPostProcessComponent"));
    OverridePostProcessComponent = NULL;
    MaterialParameterCollection = NULL;
    MaterialParameterCollectionInstance = NULL;
    SunMesh = NULL;
    MoonMesh = NULL;
    SunScale = 1;
    MoonScale = 1;
    SkyDomeMaterial = NULL;
    StarMapMaterial = NULL;
    CloudMaskTexture = NULL;
    bUseStormValues = true;
    StormMaterialInst = NULL;
    SkyLightComp = CreateDefaultSubobject<USkyLightComponent>(TEXT("SkyLightComponent"));
    RainParticleSystemComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RainParticleSystemComponent"));
    SunOrMoonMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SunMeshComponent"));
    SkyDomeMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SkyDomeMeshComp"));
    StarMapMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StarMapMeshComponent"));
    ActiveSkyBoxMat = NULL;
    StarMapMID = NULL;
    StormStrength = 1;
    WeatherComponent = NULL;
}

