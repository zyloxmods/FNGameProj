#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaAIRuntimeParametersComponent.generated.h"

class IFortAthenaAIRuntimeParametersProvider;
class UFortAthenaAIRuntimeParametersProvider;
class UFortAthenaAIRuntimeParameters;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortAthenaAIRuntimeParametersComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UFortAthenaAIRuntimeParameters>, TScriptInterface<IFortAthenaAIRuntimeParametersProvider>> RegisteredParametersProviders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortAthenaAIRuntimeParameters*> ExtractedRuntimeParameters;
    
public:
    UFortAthenaAIRuntimeParametersComponent();
};

