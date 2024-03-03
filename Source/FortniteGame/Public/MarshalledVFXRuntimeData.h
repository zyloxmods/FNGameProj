#pragma once
#include "CoreMinimal.h"
#include "MarshalledVFXRuntimeData.generated.h"

class UFXSystemComponent;
class USceneComponent;

USTRUCT(BlueprintType)
struct FMarshalledVFXRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFXSystemComponent*> DynamicSystems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* BasedOn;
    
    FORTNITEGAME_API FMarshalledVFXRuntimeData();
};

