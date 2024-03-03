#pragma once
#include "CoreMinimal.h"
#include "OnCustomHandleActorStreamedInEditorDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCustomHandleActorStreamedInEditor, AActor*, SourceActor);

