#pragma once
#include "CoreMinimal.h"
#include "ProceduralGenerationStackElement.generated.h"

class UProceduralGenerator;

USTRUCT(BlueprintType)
struct PROCEDURAL_API FProceduralGenerationStackElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UProceduralGenerator* Generator;
    
    FProceduralGenerationStackElement();
};

