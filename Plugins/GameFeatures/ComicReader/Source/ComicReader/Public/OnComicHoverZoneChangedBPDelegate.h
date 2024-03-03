#pragma once
#include "CoreMinimal.h"
#include "EFortComicClickableZone.h"
#include "OnComicHoverZoneChangedBPDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnComicHoverZoneChangedBP, EFortComicClickableZone, Zone);

