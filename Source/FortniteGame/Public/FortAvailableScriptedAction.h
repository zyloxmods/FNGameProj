#pragma once
#include "CoreMinimal.h"
#include "FortScriptedActionParams.h"
#include "FortAvailableScriptedAction.generated.h"

class AFortScriptedAction;

USTRUCT(BlueprintType)
struct FFortAvailableScriptedAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortScriptedActionParams Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortScriptedAction* ActionDefaults;
    
    FORTNITEGAME_API FFortAvailableScriptedAction();
};

