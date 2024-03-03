#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AttributeSet.h"
#include "FortAIDirectorLODAIConfig.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, Config=Game)
class UFortAIDirectorLODAIConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SingleAIUnitCost;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Priority;
    
    UFortAIDirectorLODAIConfig();
};

