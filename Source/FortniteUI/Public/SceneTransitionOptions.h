#pragma once
#include "CoreMinimal.h"
#include "ESceneTransitionType.h"
#include "SceneTransitionOptions.generated.h"

USTRUCT(BlueprintType)
struct FSceneTransitionOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESceneTransitionType TRANSITION;
    
    FORTNITEUI_API FSceneTransitionOptions();
};

