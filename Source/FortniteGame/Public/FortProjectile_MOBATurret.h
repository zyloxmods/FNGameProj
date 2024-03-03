#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "FortProjectileBase.h"
#include "FortProjectile_MOBATurret.generated.h"

class AActor;
class AController;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AFortProjectile_MOBATurret : public AFortProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHitResult> ForcedHitResults;
    
public:
    AFortProjectile_MOBATurret();
protected:
    UFUNCTION(BlueprintCallable)
    void OnHomingTargetDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
};

