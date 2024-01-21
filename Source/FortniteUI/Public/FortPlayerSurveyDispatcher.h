#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "FortPlayerSurveyDispatcher.generated.h"

class APlayerController;
class UFortPlayerSurveyContext;
class UFortPlayerSurveyPanelBase;

UCLASS(Abstract, Blueprintable)
class UFortPlayerSurveyDispatcher : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAllSurveysFinished, UObject*, Source);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPlayerSurveyPanelBase> WidgetClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* OwningPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyContext* SurveyContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyPanelBase* CurrentWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAllSurveysFinished OnAllSurveysFinishedDelegate;
    
public:
    UFortPlayerSurveyDispatcher();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartSurveyIntro(UFortPlayerSurveyPanelBase* Widget);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetOwningPlayer(APlayerController* Value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveSurveyWidget(UFortPlayerSurveyPanelBase* Widget);
    
    UFUNCTION(BlueprintCallable)
    void HandleSurveyDismissed(UFortPlayerSurveyPanelBase* Source);
    
    UFUNCTION(BlueprintCallable)
    void HandleDisplayOneSurvey();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplaySurveyWidget(UFortPlayerSurveyPanelBase* Widget);
    
public:
    UFUNCTION(BlueprintCallable)
    void DisplaySurveys(int32 SurveyCount);
    
};

