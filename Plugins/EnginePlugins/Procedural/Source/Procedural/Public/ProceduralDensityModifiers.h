#pragma once
#include "CoreMinimal.h"
#include "ProceduralDensityModifiers.generated.h"

class UProceduralDensityModifier;

USTRUCT(BlueprintType)
struct FProceduralDensityModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UProceduralDensityModifier*> Modifiers;
    
    PROCEDURAL_API FProceduralDensityModifiers();
};

