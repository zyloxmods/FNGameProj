#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "AbilitySystemInterface.h"
#include "EFortBaseWeaponDamage.h"
#include "FortDamageableActorInterface.h"
#include "FortAIProxyActor.generated.h"

class UFortAbilitySystemComponent;
class UFortDamageSet;
class UFortHealthSet;
class UFortMovementSet;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAIProxyActor : public AActor/*, public IAbilitySystemInterface*/, public IFortDamageableActorInterface {
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

