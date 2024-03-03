#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuildingGameplayActor.h"
#include "DeployableBaseCore.generated.h"

class ADeployableBasePlot;
class UParticleSystem;
class USoundBase;

UCLASS(Abstract, Blueprintable)
class ADeployableBaseCore : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADeployableBasePlot* Plot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> SimpleDeathParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> SimpleDeathSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRegisterAsGlobalGameplayEventListener: 1;
    
public:
    ADeployableBaseCore();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetSimpleDeathFXTransform() const;
    
};

