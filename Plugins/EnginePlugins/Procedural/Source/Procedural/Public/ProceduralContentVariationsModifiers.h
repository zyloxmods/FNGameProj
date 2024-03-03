#pragma once
#include "CoreMinimal.h"
#include "ProceduralContentVariationsModifiers.generated.h"

class UProceduralContentVariationsWeightsModifier;

USTRUCT(BlueprintType)
struct FProceduralContentVariationsModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UProceduralContentVariationsWeightsModifier*> Modifiers;
    
    PROCEDURAL_API FProceduralContentVariationsModifiers();
};

