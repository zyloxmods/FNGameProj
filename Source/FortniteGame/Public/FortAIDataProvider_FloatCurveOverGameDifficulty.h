#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "AttributeSet.h"
#include "FortAIDataProvider_FloatCurveOverGameDifficulty.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortAIDataProvider_FloatCurveOverGameDifficulty : public UAIDataProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ScalableFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatValue;
    
public:
    UFortAIDataProvider_FloatCurveOverGameDifficulty();
};

