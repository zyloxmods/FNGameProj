#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EFortBaseWeaponDamage.h"
#include "FortAbilitySystemInterface.h"
#include "FortDamageableActorInterface.h"
#include "FortAIProxyActor.generated.h"

class UFortAbilitySystemComponent;
class UFortDamageSet;
class UFortHealthSet;
class UFortMovementSet;

UCLASS(Blueprintable)
class AFortAIProxyActor : public AActor/*, public IFortAbilitySystemInterface*/, public IFortDamageableActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> PrimaryPhysicalSurface;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortHealthSet* HealthSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDamageSet* DamageSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMovementSet* MovementSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortBaseWeaponDamage::Type> BaseWeaponDamageResponseType;
    
public:
    AFortAIProxyActor();
    
    // Fix for true pure virtual functions not being implemented
};

