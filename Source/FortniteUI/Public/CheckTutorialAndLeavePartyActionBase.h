#pragma once
#include "CoreMinimal.h"
#include "FortScriptedAction.h"
#include "CheckTutorialAndLeavePartyActionBase.generated.h"

class AFortPlayerController;

UCLASS(Abstract, Blueprintable)
class ACheckTutorialAndLeavePartyActionBase : public AFortScriptedAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* PlayerController;
    
public:
    ACheckTutorialAndLeavePartyActionBase();
};

