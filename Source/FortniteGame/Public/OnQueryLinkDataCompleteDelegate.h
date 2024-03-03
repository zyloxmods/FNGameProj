#pragma once
#include "CoreMinimal.h"
#include "CreativeLoadedLinkData.h"
#include "OnQueryLinkDataCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnQueryLinkDataComplete, bool, bSuccess, const FString&, ErrorMessage, const FCreativeLoadedLinkData&, LinkData);

