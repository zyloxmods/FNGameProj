#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortPlayerSurveyCMSSurveyFactory.generated.h"

class UFortPlayerSurveyQuestion;

UCLASS(Blueprintable)
class FORTNITEUI_API UFortPlayerSurveyCMSSurveyFactory : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortPlayerSurveyQuestion*> Questions;
    
public:
    UFortPlayerSurveyCMSSurveyFactory();
};

