#pragma once
#include "CoreMinimal.h"
#include "AIPawnCustomizationPreloadData.generated.h"

class UFortAIPawnCustomizationDefinition;

USTRUCT(BlueprintType)
struct FAIPawnCustomizationPreloadData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAIPawnCustomizationDefinition* Customization;
    
    FORTNITEGAME_API FAIPawnCustomizationPreloadData();
};

