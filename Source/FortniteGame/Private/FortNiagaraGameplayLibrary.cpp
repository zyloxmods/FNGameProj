#include "FortNiagaraGameplayLibrary.h"

UFXSystemComponent* UFortNiagaraGameplayLibrary::SpawnFXSystemAttached(UFXSystemAsset* FXSystemAsset, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivate) {
    return NULL;
}

UFXSystemComponent* UFortNiagaraGameplayLibrary::SpawnFXAtLocation(const UObject* WorldContextObject, UFXSystemAsset* FXSystemAsset, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivate) {
    return NULL;
}

UFXSystemComponent* UFortNiagaraGameplayLibrary::SpawnAltFXAttached(EFXType Type, UNiagaraSystem* NiagaraSystemAsset, UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivate) {
    return NULL;
}

UFXSystemComponent* UFortNiagaraGameplayLibrary::SpawnAltFXAtLocation(EFXType Type, const UObject* WorldContextObject, UNiagaraSystem* NiagaraSystemAsset, UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivate) {
    return NULL;
}

void UFortNiagaraGameplayLibrary::SetInstanceParams(UFXSystemComponent* Target, const TArray<FParticleSysParam>& InstanceParameters) {
}

void UFortNiagaraGameplayLibrary::SetCustomTimeDilation(UFXSystemComponent* Target, float Dilation) {
}

void UFortNiagaraGameplayLibrary::SetBeamSourcePoint(UFXSystemComponent* Target, int32 EmitterIdx, int32 SourceIndex, const FVector& SourcePoint) {
}

void UFortNiagaraGameplayLibrary::SetBeamPoints(UFXSystemComponent* Target, int32 EmitterIdx, int32 SourceIndex, const FVector& SourcePoint, const FVector& EndPoint) {
}

void UFortNiagaraGameplayLibrary::SetBeamEndPoint(UFXSystemComponent* Target, int32 EmitterIdx, const FVector& EndPoint) {
}

UFXSystemComponent* UFortNiagaraGameplayLibrary::SetAssetOrSpawnAltFXAttached(UFXSystemComponent* Existing, EFXType Type, UNiagaraSystem* NiagaraSystemAsset, UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivate) {
    return NULL;
}

UFXSystemComponent* UFortNiagaraGameplayLibrary::SetAssetOrSpawnAltFXAtLocation(UFXSystemComponent* Existing, EFXType Type, const UObject* WorldContextObject, UNiagaraSystem* NiagaraSystemAsset, UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivate) {
    return NULL;
}

void UFortNiagaraGameplayLibrary::SetAltSystemAsset(UFXSystemComponent* Target, UNiagaraSystem* NiagaraSystemAsset, UParticleSystem* EmitterTemplate) {
}

TSoftObjectPtr<UFXSystemAsset> UFortNiagaraGameplayLibrary::SelectAltSystemAsset(EFXType Type, const TSoftObjectPtr<UNiagaraSystem>& NiagaraSystemAsset, const TSoftObjectPtr<UParticleSystem>& EmitterTemplate) {
    return NULL;
}

bool UFortNiagaraGameplayLibrary::IsNiagaraFXTypeEnabled(EFXType InType) {
    return false;
}

bool UFortNiagaraGameplayLibrary::IsNiagaraEffectEnabledSoftPtr(EFXType InType, const TSoftObjectPtr<UNiagaraSystem>& InFXSystemAsset) {
    return false;
}

bool UFortNiagaraGameplayLibrary::IsNiagaraEffectEnabled(EFXType InType, UNiagaraSystem* InFXSystemAsset) {
    return false;
}

int32 UFortNiagaraGameplayLibrary::GetPlayerWaterType() {
    return 0;
}

TSoftObjectPtr<UFXSystemAsset> UFortNiagaraGameplayLibrary::GetEnabledSoftPtr(const FFortPortableSoftParticles& SoftParticles) {
    return NULL;
}

void UFortNiagaraGameplayLibrary::EndLegacyAnimTrails(UFXSystemComponent* Target) {
}

void UFortNiagaraGameplayLibrary::BeginLegacyAnimTrails(UFXSystemComponent* Target, FName FirstSocketName, FName SecondSocketName, TEnumAsByte<ETrailWidthMode> WidthMode, float Width) {
}

UFortNiagaraGameplayLibrary::UFortNiagaraGameplayLibrary() {
}

