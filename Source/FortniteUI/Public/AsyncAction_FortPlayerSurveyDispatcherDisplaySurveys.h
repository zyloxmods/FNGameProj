#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncAction_FortPlayerSurveyDispatcherDisplaySurveys.generated.h"

class UAsyncAction_FortPlayerSurveyDispatcherDisplaySurveys;
class UFortPlayerSurveyDispatcher;
class UObject;

UCLASS(Blueprintable)
class UAsyncAction_FortPlayerSurveyDispatcherDisplaySurveys : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAllSurveysFinishedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllSurveysFinishedDelegate Finished;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyDispatcher* Dispatcher;
    
public:
    UAsyncAction_FortPlayerSurveyDispatcherDisplaySurveys();
private:
    UFUNCTION(BlueprintCallable)
    void HandleAllSurveysFinished(UObject* Source);
    
public:
    UFUNCTION(BlueprintCallable)
    static UAsyncAction_FortPlayerSurveyDispatcherDisplaySurveys* DisplaySurveys(UFortPlayerSurveyDispatcher* NewDispatcher, int32 SurveyCount);
    
};

