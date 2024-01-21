#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "AbilitySystemInterface.h"
#include "FortGlobalEnvironmentAbilityActor.generated.h"

class UFortAbilitySystemComponent;
class UFortDamageSet;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortGlobalEnvironmentAbilityActor : public AInfo /*, public IAbilitySystemInterface */{
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDamageSet* DamageSet;
    
public:
    AFortGlobalEnvironmentAbilityActor();
    
    // Fix for true pure virtual functions not being implemented
};

