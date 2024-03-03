#pragma once
#include "CoreMinimal.h"
#include "ProceduralRotationModifiers.generated.h"

class UProceduralRotationModifier;

USTRUCT(BlueprintType)
struct FProceduralRotationModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UProceduralRotationModifier*> Modifiers;
    
    PROCEDURAL_API FProceduralRotationModifiers();
};

