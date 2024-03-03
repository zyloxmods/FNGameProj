#pragma once
#include "CoreMinimal.h"
#include "ProceduralGenerator.h"
#include "Templates/SubclassOf.h"
#include "ProceduralCustomGenerator.generated.h"

class UProceduralGeneratorContext;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UProceduralCustomGenerator : public UProceduralGenerator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UProceduralGeneratorContext> GeneratorContextClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    UProceduralGeneratorContext* GeneratorContext;
    
public:
    UProceduralCustomGenerator();
};

