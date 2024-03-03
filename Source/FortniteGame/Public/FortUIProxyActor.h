#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortAbilitySystemInterface.h"
#include "FortAttributeInitializationKey.h"
#include "FortDamageSourceInterface.h"
#include "FortUIProxyActor.generated.h"

class UAttributeSet;
class UFortAbilitySystemComponent;
class UFortItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortUIProxyActor : public AActor/*, public IFortAbilitySystemInterface*/, public IFortDamageSourceInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAttributeSet*> AttributeSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* ItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAttributeInitializationKey InitializerKey;
    
public:
    AFortUIProxyActor();
    
    // Fix for true pure virtual functions not being implemented
};

