#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_JumpPenalty.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_JumpPenalty : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyJumpPenalty;
    
public:
    AFortAthenaMutator_JumpPenalty();
};

