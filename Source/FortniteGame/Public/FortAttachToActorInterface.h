#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortAttachToActorInterface.generated.h"

class AActor;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UFortAttachToActorInterface : public UInterface {
    GENERATED_BODY()
};

class IFortAttachToActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void SetActorAttachedTo(AActor* ActorAttachedTo) PURE_VIRTUAL(SetActorAttachedTo,);
    
    UFUNCTION(BlueprintCallable)
    virtual AActor* GetActorAttachedTo() const PURE_VIRTUAL(GetActorAttachedTo, return NULL;);
    
};

