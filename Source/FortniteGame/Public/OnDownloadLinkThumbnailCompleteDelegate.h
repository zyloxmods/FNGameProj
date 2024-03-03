#pragma once
#include "CoreMinimal.h"
#include "OnDownloadLinkThumbnailCompleteDelegate.generated.h"

class UTexture2DDynamic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnDownloadLinkThumbnailComplete, bool, bSuccess, UTexture2DDynamic*, InThumbnailTexture);

