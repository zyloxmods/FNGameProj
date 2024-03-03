#pragma once
#include "CoreMinimal.h"
#include "BuildingRift.h"
#include "FortTakerRift.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable, NotPlaceable)
class AFortTakerRift : public ABuildingRift {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> TakerRiftParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* TakerRiftParticleComponent;
    
public:
    AFortTakerRift();
};

