#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CommonInputKeyBrushConfiguration.h"
#include "ECommonGamepadType.h"
#include "ECommonInputType.h"
#include "CommonInputControllerData.generated.h"

UCLASS(Abstract, Blueprintable)
class COMMONINPUT_API UCommonInputControllerData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputType InputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonGamepadType GamepadType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommonInputKeyBrushConfiguration> InputBrushDataMap;
    
    UCommonInputControllerData();
};

