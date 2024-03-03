#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "FortProjectileBase.h"
#include "FortProjectileAthena.generated.h"

class AActor;
class AFortProjectileAthena;
class AFortWaterBodyActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AFortProjectileAthena : public AFortProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FireStart, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize FireStartLoc;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PawnHitResult, meta=(AllowPrivateAccess=true))
    FHitResult PawnHitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bExplodeOnPawnHit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNoCollisionForNonOwningClients: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreActorsAttachedToFiringPawn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bProcessLocalHits: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToWaitForPawnHitBeforeKillOnServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* PredictedHitActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* PredictedHitComp;
    
public:
    AFortProjectileAthena();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyPawnHit(FHitResult Hit, int32 Context);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyEndOverlap(AActor* OtherActor, UPrimitiveComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void ReplacedPredictedProjectile(AFortProjectileBase* PredictedProjectile);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void ReplacedByRealProjectile(AFortProjectileAthena* RealProjectile);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnSniperTraceWaterHit(const FHitResult& WaterHit, AFortWaterBodyActor* WaterBody);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PawnHitResult();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_FireStart();
    
protected:
    UFUNCTION(BlueprintCallable)
    void KillAfterNoPawnHit();
    
};

