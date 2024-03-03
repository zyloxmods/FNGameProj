#pragma once
#include "CoreMinimal.h"
#include "FortOnCameraFrameTargetSettingsChangedDelegateDelegate.generated.h"

class IFortUICameraFrameTargetInterface;
class UFortUICameraFrameTargetInterface;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FFortOnCameraFrameTargetSettingsChangedDelegate, TScriptInterface<IFortUICameraFrameTargetInterface>, Object);

