#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFortUIState.h"
#include "FortUIStateTrigger.generated.h"

UCLASS(Blueprintable)
class UFortUIStateTrigger : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortUIState UIState;
    
public:
    UFortUIStateTrigger();
};

