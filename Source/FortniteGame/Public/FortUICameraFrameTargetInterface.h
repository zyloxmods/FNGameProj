#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortOnCameraFrameTargetSettingsChangedDelegateDelegate.h"
#include "FortUICameraFrameTargetSettings.h"
#include "FortUICameraFrameTargetInterface.generated.h"

UINTERFACE(Blueprintable)
class FORTNITEGAME_API UFortUICameraFrameTargetInterface : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API IFortUICameraFrameTargetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFrameTargetSettingsChangedDelegate(const FFortOnCameraFrameTargetSettingsChangedDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FFortUICameraFrameTargetSettings GetZoomedOutCameraFramingSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FFortUICameraFrameTargetSettings GetZoomedInCameraFramingSettings();
    
};

