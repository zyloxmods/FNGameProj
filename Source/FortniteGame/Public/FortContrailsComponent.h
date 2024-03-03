#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Particles/WorldPSCPool.h"
#include "Engine/EngineTypes.h"
#include "OnContrailsActivatedDelegate.h"
#include "OnContrailsDeactivatedDelegate.h"
#include "OnContrailsLoadFinishedDelegate.h"
#include "FortContrailsComponent.generated.h"

class UAthenaSkyDiveContrailItemDefinition;
class UFXSystemAsset;
class UFXSystemComponent;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortContrailsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysShowContrails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFrontend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaSkyDiveContrailItemDefinition* ContrailsDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* ContrailFXAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* VaporEmitterTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* ContrailFXComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* VaporFXComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPSCPoolMethod PoolingMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityInRangeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityInRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NiagaraParamsOutRangeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NiagaraParamsOutRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrailAlphaOutRangeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrailAlphaOutRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrailWidthOutRangeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrailWidthOutRangeMax;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnContrailsLoadFinished OnContrailsLoadFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnContrailsActivated OnContrailsActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnContrailsDeactivated OnContrailsDeactivated;
    
public:
    UFortContrailsComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void SetupContrails(UAthenaSkyDiveContrailItemDefinition* Contrails, TSoftObjectPtr<UFXSystemAsset> ContrailsFXOverride, bool bFrontend, float ActivateDelay);
    
    UFUNCTION(BlueprintCallable)
    void HandleLanded(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void HandleEndSkydiving();
    
    UFUNCTION(BlueprintCallable)
    void HandleEndParachuteMovement();
    
    UFUNCTION(BlueprintCallable)
    void HandleBeginSkydiving();
    
    UFUNCTION(BlueprintCallable)
    void HandleBeginParachuteMovement();
    
};

