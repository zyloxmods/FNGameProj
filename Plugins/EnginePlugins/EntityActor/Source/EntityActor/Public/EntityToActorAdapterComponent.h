#pragma once
#include "CoreMinimal.h"
#include "EntityComponent.h"
#include "EntityToActorAdapterComponent.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class ENTITYACTOR_API UEntityToActorAdapterComponent : public UEntityComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
public:
    UEntityToActorAdapterComponent();
};

