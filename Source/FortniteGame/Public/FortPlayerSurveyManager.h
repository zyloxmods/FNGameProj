#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortPlayerSurveyManager.generated.h"

class IFortPlayerSurvey;
class UFortPlayerSurvey;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortPlayerSurveyManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IFortPlayerSurvey>> SurveyQueue;
    
public:
    UFortPlayerSurveyManager();
    UFUNCTION(BlueprintCallable)
    void RemoveSurvey(TScriptInterface<IFortPlayerSurvey> Survey);
    
    UFUNCTION(BlueprintCallable)
    void AddSurvey(TScriptInterface<IFortPlayerSurvey> Survey);
    
};

