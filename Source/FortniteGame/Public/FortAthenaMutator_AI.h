#pragma once
#include "CoreMinimal.h"
#include "FortGameplayMutator.h"
#include "FortAthenaMutator_AI.generated.h"

class UFortMovementComp_AIChar;

UCLASS(Blueprintable)
class AFortAthenaMutator_AI : public AFortGameplayMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortMovementComp_AIChar*> DeimosMoveComponents;
    
public:
    AFortAthenaMutator_AI();
};

