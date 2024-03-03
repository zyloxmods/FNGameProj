#pragma once
#include "CoreMinimal.h"
#include "FortAccountItem.h"
#include "FortPlayerSurveyTokenItem.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortPlayerSurveyTokenItem : public UFortAccountItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString survey_id;
    
    UFortPlayerSurveyTokenItem();
};

