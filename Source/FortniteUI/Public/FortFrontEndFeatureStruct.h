#pragma once
#include "CoreMinimal.h"
#include "EFortFrontEndFeatureState.h"
#include "EFortFrontEndFeatureStateReason.h"
#include "FrontEndFeatureStateChangedDelegateDelegate.h"
#include "FortFrontEndFeatureStruct.generated.h"

USTRUCT(BlueprintType)
struct FFortFrontEndFeatureStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortFrontEndFeatureState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortFrontEndFeatureState ForcedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortFrontEndFeatureStateReason ForcedStateReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrontEndFeatureStateChangedDelegate ChangeDelegate;
    
    FORTNITEUI_API FFortFrontEndFeatureStruct();
};

