#pragma once
#include "CoreMinimal.h"
#include "ProceduralGenerationStackElement.h"
#include "ProceduralGenerator.h"
#include "ProceduralGeneratorStack.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UProceduralGeneratorStack : public UProceduralGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProceduralGenerationStackElement> Generators;
    
    UProceduralGeneratorStack();
};

