#pragma once
#include "CoreMinimal.h"
#include "GridSortKey.h"
#include "GetSortKeyForDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(FGridSortKey, FGetSortKeyFor, UObject*, Data);

