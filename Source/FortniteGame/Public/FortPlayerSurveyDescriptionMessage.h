#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyDescriptionMessage.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyDescriptionMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
    FORTNITEGAME_API FFortPlayerSurveyDescriptionMessage();
};

