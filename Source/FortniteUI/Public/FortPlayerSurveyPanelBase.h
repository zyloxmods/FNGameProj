#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortPlayerSurveyPanelBase.generated.h"

class IFortPlayerSurvey;
class UFortPlayerSurvey;
class UFortPlayerSurveyPanelBase;

UCLASS(Blueprintable, EditInlineNew)
class UFortPlayerSurveyPanelBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPanelDismissed, UFortPlayerSurveyPanelBase*, Source);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPanelDismissed OnPanelDismissed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortPlayerSurvey> Survey;
    
public:
    UFortPlayerSurveyPanelBase();
    UFUNCTION(BlueprintCallable)
    void SetSurvey(TScriptInterface<IFortPlayerSurvey> Value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSurveyChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<IFortPlayerSurvey> GetSurvey() const;
    
};

