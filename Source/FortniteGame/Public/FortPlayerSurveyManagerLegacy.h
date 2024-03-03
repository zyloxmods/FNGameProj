#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortPlayerSurveyManagerLegacy.generated.h"

class UFortPlayerSurveyBase;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortPlayerSurveyManagerLegacy : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortPlayerSurveyBase*> SurveyQueue;
    
public:
    UFortPlayerSurveyManagerLegacy();
    UFUNCTION(BlueprintCallable)
    void RemoveSurvey(UFortPlayerSurveyBase* Survey);
    
    UFUNCTION(BlueprintCallable)
    void AddSurvey(UFortPlayerSurveyBase* Survey);
    
};

