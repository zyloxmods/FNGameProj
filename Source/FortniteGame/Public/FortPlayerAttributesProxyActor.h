#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortAbilitySystemInterface.h"
#include "FortPlayerAttributeSets.h"
#include "FortPlayerAttributesProxyActor.generated.h"

class UFortAbilitySystemComponent;

UCLASS(Blueprintable)
class AFortPlayerAttributesProxyActor : public AActor/*, public IFortAbilitySystemInterface*/ {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPlayerAttributeSets AttributeSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAbilitySystemComponent* AbilitySystemComponent;
    
public:
    AFortPlayerAttributesProxyActor();
    
    // Fix for true pure virtual functions not being implemented
};

