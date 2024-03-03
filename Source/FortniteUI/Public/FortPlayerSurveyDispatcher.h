#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "FortPlayerSurveyDispatcher.generated.h"

class APlayerController;
class UCommonActivatablePanel;
class UFortPlayerSurveyContext;
class UFortPlayerSurveyPanelBase;

UCLASS(Abstract, Blueprintable)
class UFortPlayerSurveyDispatcher : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAllSurveysFinished, UObject*, Source);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPlayerSurveyPanelBase> WidgetClass;
    
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
    UFUNCTION(BlueprintCallable)
    void SetOwningPlayer(APlayerController* Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleSurveyDismissed(UFortPlayerSurveyPanelBase* Source);
    
    UFUNCTION(BlueprintCallable)
    void HandleFirstActivation(UCommonActivatablePanel* Panel);
    
    UFUNCTION(BlueprintCallable)
    void HandleDisplayOneSurvey();
    
public:
    UFUNCTION(BlueprintCallable)
    void DisplaySurveys(int32 SurveyCount);
    
};

