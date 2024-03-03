#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortPlayerSurveyQuestionPresentationStyle.h"
#include "EFortPlayerSurveyQuestionType.h"
#include "Templates/SubclassOf.h"
#include "FortPlayerSurveyQuestionDisplayWidgetBase.generated.h"

class UCommonWidgetSwitcher;
class UFortPlayerSurveyAnswerWidgetBase;
class UFortPlayerSurveyAnswerWidgetDataTable;
class UFortPlayerSurveyQuestionSelector;
class UObject;
class USpacer;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerSurveyQuestionDisplayWidgetBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyAnswerWidgetDataTable* AnswerWidgetDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyQuestionSelector* CurrentQA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyAnswerWidgetBase* CurrentAnswerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UFortPlayerSurveyAnswerWidgetBase>, UFortPlayerSurveyAnswerWidgetBase*> MapOfWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* Widget_Empty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* Switcher_Main;
    
public:
    UFortPlayerSurveyQuestionDisplayWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void NativeHandleQuestionChanged(UObject* Source);
    
    UFUNCTION(BlueprintCallable)
    void NativeHandleQAChanged();
    
    UFUNCTION(BlueprintCallable)
    void InitSwitcherChildrenLoop(EFortPlayerSurveyQuestionType QuestionType, EFortPlayerSurveyQuestionPresentationStyle PresentationStyle, TSubclassOf<UFortPlayerSurveyAnswerWidgetBase> WidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleQAChanged();
    
};

