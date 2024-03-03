#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFortPlayerSurveyFinishReason.h"
#include "FortPlayerSurveyCMSScheduler.generated.h"

class UFortPlayerSurveyCMSSurvey;
class UFortPlayerSurveyCMSSurveyDataSource;
class UFortPlayerSurveyCMSTracker;
class UFortPlayerSurveyManagerLegacy;
class UPlayer;

UCLASS(Blueprintable)
class UFortPlayerSurveyCMSScheduler : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyCMSSurveyDataSource* CMSSurveyDataSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyCMSTracker* SurveyTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyManagerLegacy* SurveyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayer* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortPlayerSurveyCMSSurvey*> ActiveSurveyList;
    
public:
    UFortPlayerSurveyCMSScheduler();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleSurveyFinished(UObject* Source, EFortPlayerSurveyFinishReason Reason);
    
};

