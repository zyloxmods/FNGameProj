#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortPlayerSurveyAnswer.h"
#include "FortPlayerSurveyBase.generated.h"

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UFortPlayerSurveyBase : public UObject {
    GENERATED_BODY()
public:
  //  UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
//    FFortPlayerSurveyFinished OnSurveyFinished;
    
protected:
   // UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //FFortPlayerSurveyItemChangedInternalDelegate OnAnswerChangedDelegate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerSurveyAnswer> Answers;
    
    UFortPlayerSurveyBase();
};

