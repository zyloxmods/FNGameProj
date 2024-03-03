#pragma once
#include "CoreMinimal.h"
#include "OnNavGenerationFinishedDelegate.generated.h"

class USceneComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnNavGenerationFinished, USceneComponent*, Component);

