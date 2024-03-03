#pragma once
#include "CoreMinimal.h"
#include "OnCreativeLinkThumbnailUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreativeLinkThumbnailUpdated, bool, bSuccess);

