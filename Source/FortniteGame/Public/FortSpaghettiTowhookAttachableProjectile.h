#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAttachableProjectileBase.h"
#include "FortSpaghettiTowhookAttachableProjectile.generated.h"

class AFortSpaghettiVehicle;

UCLASS(Blueprintable)
class AFortSpaghettiTowhookAttachableProjectile : public AFortAttachableProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RopeAttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionProfileNameOverride;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortSpaghettiVehicle* OwningVehicle;
    
public:
    AFortSpaghettiTowhookAttachableProjectile();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRopeAttachLocation() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyProjectile();
    
};

