#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ProceduralScaleModifiers.generated.h"

class UProceduralScaleModifier;

USTRUCT(BlueprintType)
struct FProceduralScaleModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomScaleEnabled;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval RandomScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UProceduralScaleModifier*> Modifiers;
    
    PROCEDURAL_API FProceduralScaleModifiers();
};

