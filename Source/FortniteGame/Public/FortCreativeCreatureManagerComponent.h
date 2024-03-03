#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortCreativeCreatureManagerComponent.generated.h"

class UFortCreativeCreatureManagerInfoComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Creative, meta=(BlueprintSpawnableComponent))
class UFortCreativeCreatureManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortCreativeCreatureManagerInfoComponent*> CreatureManagerInfos;
    
public:
    UFortCreativeCreatureManagerComponent();
    UFUNCTION(BlueprintCallable)
    void OnInfoComponentRemoved(UFortCreativeCreatureManagerInfoComponent* CreatureManagerInfoComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnInfoComponentAdded(UFortCreativeCreatureManagerInfoComponent* CreatureManagerInfoComponent);
    
};

