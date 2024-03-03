#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask_MoveTo.h"
#include "FortMoveConfig.h"
#include "FortAITask_Move.generated.h"

UCLASS(Blueprintable)
class UFortAITask_Move : public UAITask_MoveTo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMoveConfig MoveConfig;
    

};

