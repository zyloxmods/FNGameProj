#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyBase.h"
#include "FortPlayerSurveyConditionsContextLegacy.h"
#include "FortPlayerSurveyCMSSurvey.generated.h"

class UFortPlayerSurveyCMSSurveyFactory;

UCLASS(Blueprintable)
class FORTNITEUI_API UFortPlayerSurveyCMSSurvey : public UFortPlayerSurveyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyCMSSurveyFactory* Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPlayerSurveyConditionsContextLegacy ConditionsContext;
    
 //   UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
   // FNotificationInternalDelegate OnDescriptionChangedDelegate;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //UFortPlayerSurveyBase::FFortPlayerSurveyItemChangedInternalDelegate OnQuestionChangedDelegate;
    
public:
    UFortPlayerSurveyCMSSurvey();
};

