#pragma once
#include "CoreMinimal.h"
#include "OnSchematicUnlockedDelegate.generated.h"

class UFortSchematicItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSchematicUnlocked, UFortSchematicItem*, Schematic);

