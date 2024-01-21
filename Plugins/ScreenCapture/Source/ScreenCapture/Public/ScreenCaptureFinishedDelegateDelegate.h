#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ScreenCaptureFinishedDelegateDelegate.generated.h"

class UTexture2D;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FScreenCaptureFinishedDelegate, bool, bSuccess, const FString&, LocalFilePath, FIntPoint, VideoResolution, UTexture2D*, PreviewImage);

