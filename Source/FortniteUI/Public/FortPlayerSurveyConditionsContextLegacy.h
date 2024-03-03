#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyConditionsContextLegacy.generated.h"

class UFortPlayerSurveyContext;
class UPlayer;

USTRUCT(BlueprintType)
struct FFortPlayerSurveyConditionsContextLegacy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayer* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyContext* Context;
    
    FORTNITEUI_API FFortPlayerSurveyConditionsContextLegacy();
};

