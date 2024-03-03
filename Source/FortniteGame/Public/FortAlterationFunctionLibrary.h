#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Chaos/ChaosEngineInterface.h"
#include "FortCosmeticModification.h"
#include "FortAlterationFunctionLibrary.generated.h"

class UNiagaraSystem;
class UParticleSystem;

UCLASS(Blueprintable)
class UFortAlterationFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortAlterationFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UParticleSystem* GetAlterationImpactPhysicalSurfaceEffects(TEnumAsByte<EPhysicalSurface> HitSurface, const FFortCosmeticModification& CosmeticMod);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UNiagaraSystem* GetAlterationImpactNiagaraPhysicalSurfaceEffects(TEnumAsByte<EPhysicalSurface> HitSurface, const FFortCosmeticModification& CosmeticMod);
    
};

