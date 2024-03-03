#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortAthenaAIEvaluatorComponent.generated.h"

class UFortAthenaAIEvaluator;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortAthenaAIEvaluatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortAthenaAIEvaluator*> AIEvaluators;
    
public:
    UFortAthenaAIEvaluatorComponent();
};

