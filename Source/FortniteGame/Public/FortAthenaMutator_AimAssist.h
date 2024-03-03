#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_AimAssist.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_AimAssist : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAimAssistAllowed;
    
public:
    AFortAthenaMutator_AimAssist();
};

