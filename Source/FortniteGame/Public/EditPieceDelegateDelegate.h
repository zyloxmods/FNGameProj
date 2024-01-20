#pragma once
#include "CoreMinimal.h"
#include "EditPieceDelegateDelegate.generated.h"

class ABuildingSMActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FEditPieceDelegate, ABuildingSMActor*, BuildingActor);

