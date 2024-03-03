#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortPlayerSurveyDescription.h"
#include "FortPlayerSurveyLocalSurveyAsset.generated.h"

class UFortPlayerSurveyFixedSurvey;
class UFortPlayerSurveyQuestionLegacy;
class UObject;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortPlayerSurveyLocalSurveyAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPlayerSurveyDescription Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortPlayerSurveyQuestionLegacy*> Questions;
    
    UFortPlayerSurveyLocalSurveyAsset();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UFortPlayerSurveyFixedSurvey* ConstructSurvey(UObject* Outer) const;
    
};

