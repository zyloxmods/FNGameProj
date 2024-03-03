#pragma once
#include "CoreMinimal.h"
#include "FortGameMode.h"
#include "FortGameModeEmptyDedicated.generated.h"

class AFortGameSessionDedicated;

UCLASS(Blueprintable, NonTransient)
class AFortGameModeEmptyDedicated : public AFortGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameSessionDedicated* FortGameSessionDedicated;
    
    AFortGameModeEmptyDedicated();
};

