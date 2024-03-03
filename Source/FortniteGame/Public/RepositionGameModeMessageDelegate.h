#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "RepositionGameModeMessageDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRepositionGameModeMessage, FVector2D, position, TEnumAsByte<EHorizontalAlignment>, HorizontalAlignment, TEnumAsByte<EVerticalAlignment>, VerticalAlignment);

