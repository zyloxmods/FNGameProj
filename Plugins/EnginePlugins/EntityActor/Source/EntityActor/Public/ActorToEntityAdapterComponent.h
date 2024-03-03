#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorToEntityAdapterComponent.generated.h"

class UEntityComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENTITYACTOR_API UActorToEntityAdapterComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 EntityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEntityComponent*> SerializedComponents;
    
public:
    UActorToEntityAdapterComponent();
};

