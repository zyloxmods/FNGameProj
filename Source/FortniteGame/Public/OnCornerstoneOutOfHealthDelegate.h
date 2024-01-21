#pragma once
#include "CoreMinimal.h"
#include "OnCornerstoneOutOfHealthDelegate.generated.h"

class AFortPvPBaseCornerstone;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCornerstoneOutOfHealth, AFortPvPBaseCornerstone*, Cornerstone);

