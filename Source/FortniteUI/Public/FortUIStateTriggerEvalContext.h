#pragma once
#include "CoreMinimal.h"
#include "FortUIStateTriggerEvalContext.generated.h"

USTRUCT(BlueprintType)
struct FFortUIStateTriggerEvalContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoggedIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWorldReady;
    
    FORTNITEUI_API FFortUIStateTriggerEvalContext();
};

