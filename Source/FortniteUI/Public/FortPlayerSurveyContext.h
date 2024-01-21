#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "FortPlayerSurveyContextRequestDelegateDelegate.h"
#include "FortPlayerSurveyContext.generated.h"

class UFortPlayerSurveyCMSScheduler;
class UFortPlayerSurveyCMSTracker;
class UFortPlayerSurveyManager;

UCLASS(Blueprintable, NonTransient)
class FORTNITEUI_API UFortPlayerSurveyContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPlayerSurveyContextRequestDelegate OnDisplayOneSurveyRequested;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyManager* SurveyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyCMSTracker* SurveyTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyCMSScheduler* SurveyScheduler;
    
public:
    UFortPlayerSurveyContext();
    UFUNCTION(BlueprintCallable)
    void RequestDisplayOneSurvey();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayerSurveySystemEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPlayerSurveyManager* GetPlayerSurveyManager() const;
    
};

