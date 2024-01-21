#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortPlayerSurveyAnswer.h"
#include "FortPlayerSurveyAnswerContainerChangeDelegateDelegate.h"
#include "FortPlayerSurveyAnswerContainer.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UFortPlayerSurveyAnswerContainer : public UInterface {
    GENERATED_BODY()
};

class IFortPlayerSurveyAnswerContainer : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void SetAnswer(FFortPlayerSurveyAnswer Value) PURE_VIRTUAL(SetAnswer,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RemoveOnAnswerChangedDelegate(const FFortPlayerSurveyAnswerContainerChangeDelegate& InDelegate) const PURE_VIRTUAL(RemoveOnAnswerChangedDelegate,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsAnswerValid() const PURE_VIRTUAL(IsAnswerValid, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FFortPlayerSurveyAnswer GetAnswer() const PURE_VIRTUAL(GetAnswer, return FFortPlayerSurveyAnswer{};);
    
    UFUNCTION(BlueprintCallable)
    virtual void AddOnAnswerChangedDelegate(const FFortPlayerSurveyAnswerContainerChangeDelegate& InDelegate) const PURE_VIRTUAL(AddOnAnswerChangedDelegate,);
    
};

