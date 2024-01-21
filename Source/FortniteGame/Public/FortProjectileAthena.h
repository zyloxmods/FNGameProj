#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "FortProjectileBase.h"
#include "FortProjectileAthena.generated.h"

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
    bool bExplodeOnPawnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoCollisionForNonOwningClients;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreActorsAttachedToFiringPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToWaitForPawnHitBeforeKillOnServer;
    
public:
    AFortProjectileAthena();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyPawnHit(FHitResult Hit);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PawnHitResult();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_FireStart();
    
protected:
    UFUNCTION(BlueprintCallable)
    void KillAfterNoPawnHit();
    
};

