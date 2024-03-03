#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Particles/WorldPSCPool.h"
#include "Engine/EngineTypes.h"
#include "Particles/ParticleSystemComponent.h"
#include "EFXType.h"
#include "FortPortableSoftParticles.h"
#include "FortNiagaraGameplayLibrary.generated.h"

class UFXSystemAsset;
class UFXSystemComponent;
class UNiagaraSystem;
class UObject;
class UParticleSystem;
class USceneComponent;

UCLASS(Blueprintable)
class UFortNiagaraGameplayLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortNiagaraGameplayLibrary();
    UFUNCTION(BlueprintCallable)
    static UFXSystemComponent* SpawnFXSystemAttached(UFXSystemAsset* FXSystemAsset, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFXSystemComponent* SpawnFXAtLocation(const UObject* WorldContextObject, UFXSystemAsset* FXSystemAsset, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivate);
    
    UFUNCTION(BlueprintCallable)
    static UFXSystemComponent* SpawnAltFXAttached(EFXType Type, UNiagaraSystem* NiagaraSystemAsset, UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFXSystemComponent* SpawnAltFXAtLocation(EFXType Type, const UObject* WorldContextObject, UNiagaraSystem* NiagaraSystemAsset, UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivate);
    
    UFUNCTION(BlueprintCallable)
    static void SetInstanceParams(UFXSystemComponent* Target, const TArray<FParticleSysParam>& InstanceParameters);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomTimeDilation(UFXSystemComponent* Target, float Dilation);
    
    UFUNCTION(BlueprintCallable)
    static void SetBeamSourcePoint(UFXSystemComponent* Target, int32 EmitterIdx, int32 SourceIndex, const FVector& SourcePoint);
    
    UFUNCTION(BlueprintCallable)
    static void SetBeamPoints(UFXSystemComponent* Target, int32 EmitterIdx, int32 SourceIndex, const FVector& SourcePoint, const FVector& EndPoint);
    
    UFUNCTION(BlueprintCallable)
    static void SetBeamEndPoint(UFXSystemComponent* Target, int32 EmitterIdx, const FVector& EndPoint);
    
    UFUNCTION(BlueprintCallable)
    static UFXSystemComponent* SetAssetOrSpawnAltFXAttached(UFXSystemComponent* Existing, EFXType Type, UNiagaraSystem* NiagaraSystemAsset, UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFXSystemComponent* SetAssetOrSpawnAltFXAtLocation(UFXSystemComponent* Existing, EFXType Type, const UObject* WorldContextObject, UNiagaraSystem* NiagaraSystemAsset, UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivate);
    
    UFUNCTION(BlueprintCallable)
    static void SetAltSystemAsset(UFXSystemComponent* Target, UNiagaraSystem* NiagaraSystemAsset, UParticleSystem* EmitterTemplate);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UFXSystemAsset> SelectAltSystemAsset(EFXType Type, const TSoftObjectPtr<UNiagaraSystem>& NiagaraSystemAsset, const TSoftObjectPtr<UParticleSystem>& EmitterTemplate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNiagaraFXTypeEnabled(EFXType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNiagaraEffectEnabledSoftPtr(EFXType InType, const TSoftObjectPtr<UNiagaraSystem>& InFXSystemAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNiagaraEffectEnabled(EFXType InType, UNiagaraSystem* InFXSystemAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerWaterType();
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UFXSystemAsset> GetEnabledSoftPtr(const FFortPortableSoftParticles& SoftParticles);
    
    UFUNCTION(BlueprintCallable)
    static void EndLegacyAnimTrails(UFXSystemComponent* Target);
    
    UFUNCTION(BlueprintCallable)
    static void BeginLegacyAnimTrails(UFXSystemComponent* Target, FName FirstSocketName, FName SecondSocketName, TEnumAsByte<ETrailWidthMode> WidthMode, float Width);
    
};

