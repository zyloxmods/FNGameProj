#pragma once
#include "CoreMinimal.h"
#include "OnItemToRepresentChangedDelegate.generated.h"

class UFortItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemToRepresentChanged, UFortItem*, NewItemToRepresent);

