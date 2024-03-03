#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CommonInputPlatformData.h"
#include "Templates/SubclassOf.h"
#include "CommonInputSettings.generated.h"

class UCommonUIInputData;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class COMMONINPUT_API UCommonInputSettings : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonUIInputData> InputData;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonInputPlatformData CommonInputPlatformData[9];
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableInputMethodThrashingProtection;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputMethodThrashingLimit;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double InputMethodThrashingWindowInSeconds;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double InputMethodThrashingCooldownInSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowOutOfFocusDeviceInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonUIInputData> InputDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCommonInputPlatformData CurrentPlatform;
    
public:
    UCommonInputSettings();
};

