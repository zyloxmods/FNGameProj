#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CommonInputKeyBrushConfiguration.h"
#include "CommonInputKeySetBrushConfiguration.h"
#include "ECommonGamepadType.h"
#include "ECommonInputType.h"
#include "CommonInputControllerData.generated.h"

class UTexture2D;

UCLASS(Abstract, Blueprintable)
class COMMONINPUT_API UCommonInputControllerData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputType InputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonGamepadType GamepadType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ControllerTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ControllerButtonMaskTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommonInputKeyBrushConfiguration> InputBrushDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommonInputKeySetBrushConfiguration> InputBrushKeySets;
    
    UCommonInputControllerData();
};

