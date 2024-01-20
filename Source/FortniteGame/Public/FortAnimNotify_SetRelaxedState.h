#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EAnimRelaxedState.h"
#include "FortAnimNotify_SetRelaxedState.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UFortAnimNotify_SetRelaxedState : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimRelaxedState NewRelaxedState;
    
    UFortAnimNotify_SetRelaxedState();
};

