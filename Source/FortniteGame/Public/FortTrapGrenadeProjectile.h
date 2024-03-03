#pragma once
#include "CoreMinimal.h"
#include "FortProjectileBase.h"
#include "FortTrapGrenadeProjectile.generated.h"

class AFortDecoTool_ContextTrap;
class AFortProjectileDecoHelper;
class UFortContextTrapItemDefinition;

UCLASS(Abstract, Blueprintable)
class AFortTrapGrenadeProjectile : public AFortProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DecoTool, meta=(AllowPrivateAccess=true))
    AFortDecoTool_ContextTrap* ProjectileDecoTool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortProjectileDecoHelper* ProjectileDecoHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortContextTrapItemDefinition* TrapDefinition;
    
public:
    AFortTrapGrenadeProjectile();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DecoTool();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeProjectileDecoHelperAndTool();
    
    UFUNCTION(BlueprintCallable)
    UFortContextTrapItemDefinition* GetTrapDefinition();
    
};

