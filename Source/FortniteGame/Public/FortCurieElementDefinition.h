#pragma once
#include "CoreMinimal.h"
#include "CurieElementDefinitionBase.h"
#include "FortCurieElementDefinition.generated.h"

USTRUCT(BlueprintType)
struct FFortCurieElementDefinition : public FCurieElementDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntensityDecayRate;
    
public:
    FORTNITEGAME_API FFortCurieElementDefinition();
};

