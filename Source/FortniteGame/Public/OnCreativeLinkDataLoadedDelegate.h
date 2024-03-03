#pragma once
#include "CoreMinimal.h"
#include "CreativeLoadedLinkData.h"
#include "OnCreativeLinkDataLoadedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreativeLinkDataLoaded, const FCreativeLoadedLinkData&, LinkData);

