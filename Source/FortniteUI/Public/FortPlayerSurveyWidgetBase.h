#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyAnswerContainerChangeEventInfo.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "FortPlayerSurveyWidgetBase.generated.h"

class UCommonButton;
class UCommonTextBlock;
class UFortPlayerSurveyBase;
class UFortPlayerSurveyQuestionDisplayWidgetBase;
class UFortPlayerSurveyQuestionSelector;
class UObject;
class URichTextBlock;
class UTextBlock;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerSurveyWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText QuestionFormatText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPlayerSurveyQuestionSelector> QuestionSelectorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyBase* Survey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyQuestionSelector* ActiveQuestionSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyQuestionDisplayWidgetBase* Widget_AnswerSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* Text_SurveyTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_QuestionNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* Text_Question;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_Subtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher_NextButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_NextQuestion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Close;
    
public:
    UFortPlayerSurveyWidgetBase();
    UFUNCTION(BlueprintCallable)
    void ResetSurvey();
    
protected:
    UFUNCTION(BlueprintCallable)
    void NativeHandleSurveyChanged();
    
    UFUNCTION(BlueprintCallable)
    void NativeHandleQuestionsChanged(UObject* Source, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void NativeHandleDescriptionChanged(UObject* Source);
    
    UFUNCTION(BlueprintCallable)
    void HandleQuestionChanged(UObject* Source);
    
    UFUNCTION(BlueprintCallable)
    void HandleNumQuestionsChanged(UObject* Source);
    
    UFUNCTION(BlueprintCallable)
    void HandleNavigationStateChanged(UObject* Source);
    
    UFUNCTION(BlueprintCallable)
    void HandleIndexChange(UObject* Source);
    
    UFUNCTION(BlueprintCallable)
    void HandleAnswerChanged(UObject* Source, const FFortPlayerSurveyAnswerContainerChangeEventInfo& EventInfo);
    
};

