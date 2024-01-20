#pragma once
#include "CoreMinimal.h"
#include "FortBTService_ContextOverride.h"
#include "FortBTContext_SuppressGoalUpdate.generated.h"

UCLASS(Blueprintable)
class UFortBTContext_SuppressGoalUpdate : public UFortBTService_ContextOverride {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnregisterFromGoalManager;
    
public:
    UFortBTContext_SuppressGoalUpdate();
};

