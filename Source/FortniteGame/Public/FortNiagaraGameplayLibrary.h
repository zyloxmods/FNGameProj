#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Particles/WorldPSCPool.h"
#include "FortNiagaraGameplayLibrary.generated.h"

class UFXSystemAsset;
//class UFXSystemComponent;
class USceneComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortNiagaraGameplayLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortNiagaraGameplayLibrary();
    //UFUNCTION(BlueprintCallable)
    //static UFXSystemComponent* SpawnFXSystemAttached(UFXSystemAsset* FXSystemAsset, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod);
    
};

