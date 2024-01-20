#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortPlayerSurveyWidgetBase.generated.h"

class IFortPlayerSurvey;
class UFortPlayerSurvey;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UFortPlayerSurveyWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortPlayerSurvey> Survey;
    
public:
    UFortPlayerSurveyWidgetBase();
    UFUNCTION(BlueprintCallable)
    void SetSurvey(TScriptInterface<IFortPlayerSurvey> Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NativeHandleSurveyChanged();
    
    UFUNCTION(BlueprintCallable)
    void NativeHandleQuestionsChanged(UObject* Source, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void NativeHandleDescriptionChanged(UObject* Source);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSurveyChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleQuestionsChanged(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDescriptionChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<IFortPlayerSurvey> GetSurvey() const;
    
};

