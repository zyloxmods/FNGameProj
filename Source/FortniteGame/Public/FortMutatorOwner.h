#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortMutatorOwner.generated.h"

class AActor;
class AFortGameplayMutator;
class APlayerState;

UINTERFACE()
class UFortMutatorOwner : public UInterface {
    GENERATED_BODY()
};

class IFortMutatorOwner : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void RemoveMutatorFromList(AFortGameplayMutator* Mutator) PURE_VIRTUAL(RemoveMutatorFromList,);
    
    UFUNCTION()
    virtual void GetMutatorsForContextActor(TArray<AFortGameplayMutator*>& OutMutators, const AActor* ContextActor) const PURE_VIRTUAL(GetMutatorsForContextActor,);
    
    UFUNCTION()
    virtual void GetMutatorRelevantPlayers(TArray<APlayerState*>& OutPlayers) const PURE_VIRTUAL(GetMutatorRelevantPlayers,);
    
    UFUNCTION()
    virtual void AddMutatorToList(AFortGameplayMutator* Mutator) PURE_VIRTUAL(AddMutatorToList,);
    
};

