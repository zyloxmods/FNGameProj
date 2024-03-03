#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortPlayerSurveyPanelBase.generated.h"

class UFortPlayerSurveyBase;
class UFortPlayerSurveyPanelBase;
class UFortPlayerSurveyWidgetBase;

UCLASS(Blueprintable, EditInlineNew)
class UFortPlayerSurveyPanelBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPanelDismissed, UFortPlayerSurveyPanelBase*, Source);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPanelDismissed OnPanelDismissed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyBase* Survey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyWidgetBase* PanelContents;
    
public:
    UFortPlayerSurveyPanelBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartIntro_BP();
    
    UFUNCTION(BlueprintCallable)
    void SetSurvey(UFortPlayerSurveyBase* Value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerSurveyEnded();
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerSurveyEnded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPlayerSurveyBase* GetSurvey() const;
    
};

