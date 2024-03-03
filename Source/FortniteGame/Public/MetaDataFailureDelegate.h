#pragma once
#include "CoreMinimal.h"
#include "MetaDataFailureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMetaDataFailure, const FString&, MediaMetadataResponse);

