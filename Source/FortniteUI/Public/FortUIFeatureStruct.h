#pragma once
#include "CoreMinimal.h"
#include "EFortUIFeatureState.h"
#include "EFortUIFeatureStateReason.h"
#include "UIFeatureStateChangedDelegateDelegate.h"
#include "FortUIFeatureStruct.generated.h"

USTRUCT(BlueprintType)
struct FFortUIFeatureStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortUIFeatureState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortUIFeatureState ForcedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortUIFeatureStateReason ForcedStateReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIFeatureStateChangedDelegate ChangeDelegate;
    
    FORTNITEUI_API FFortUIFeatureStruct();
};

