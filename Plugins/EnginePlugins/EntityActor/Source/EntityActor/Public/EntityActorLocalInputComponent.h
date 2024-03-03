#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EntityComponent.h"
#include "EntityActorLocalInputComponent.generated.h"

UCLASS(Blueprintable)
class ENTITYACTOR_API UEntityActorLocalInputComponent : public UEntityComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAutoReceiveInput::Type> AutoReceiveControllerInput;
    
public:
    UEntityActorLocalInputComponent();
};

