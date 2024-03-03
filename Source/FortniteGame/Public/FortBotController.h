#pragma once
#include "CoreMinimal.h"
#include "FortAIController.h"
#include "FortBotController.generated.h"

class UFortBotMissionLogic;

UCLASS(Blueprintable)
class AFortBotController : public AFortAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortBotMissionLogic* CurrentMissionLogic;
    
public:
    AFortBotController();
};

