#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyDescriptionMessage.h"
#include "FortPlayerSurveyDescription.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SurveyTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPlayerSurveyDescriptionMessage CancelConfirmationMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultAnswer;
    
    FORTNITEGAME_API FFortPlayerSurveyDescription();
};

