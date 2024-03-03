#pragma once
#include "CoreMinimal.h"
#include "ProceduralContentVariationMap.h"
#include "ProceduralContentVariationsWeightsModifier.h"
#include "ProceduralContentVariationsWeightsMapModifier.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UProceduralContentVariationsWeightsMapModifier : public UProceduralContentVariationsWeightsModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProceduralContentVariationMap> VariationsMaps;
    
    UProceduralContentVariationsWeightsMapModifier();
};

