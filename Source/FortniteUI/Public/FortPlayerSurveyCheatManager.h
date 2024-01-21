#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFortPlayerSurveyFinishReason.h"
#include "EFortPlayerSurveyTrigger.h"
#include "FortPlayerSurveyCheatManager.generated.h"

class UFortPlayerSurveyBase;
class UFortPlayerSurveyLocalSurveyAsset;

UCLASS(Blueprintable, Within=FortCheatManager)
class FORTNITEUI_API UFortPlayerSurveyCheatManager : public UObject {
    GENERATED_BODY()
public:
    UFortPlayerSurveyCheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerCMSPlayerSurveys(EFortPlayerSurveyTrigger Trigger, bool bRunSurveyNow);
    
protected:
    UFUNCTION(BlueprintCallable)
    void TestPlayerSurvey(UFortPlayerSurveyBase* Survey);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void TestLocalPlayerSurvey(const TSoftObjectPtr<UFortPlayerSurveyLocalSurveyAsset>& Asset);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestCMSPlayerSurvey(const FString& SurveyID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScheduleCMSPlayerSurvey(const FString& SurveyID, bool bRunSurveyNow);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListCMSPlayerSurveys();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleTestSurveyFinished(UObject* Source, EFortPlayerSurveyFinishReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void HandleSurveyAnswerChanged(UObject* Source, int32 Index);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void EnableCMSPlayerSurvey(const FString& SurveyID);
    
};

