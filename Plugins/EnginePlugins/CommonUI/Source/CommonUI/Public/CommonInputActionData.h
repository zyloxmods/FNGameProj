#pragma once
#include "CoreMinimal.h"
#include "ECommonGamepadType.h"
#include "Engine/DataTable.h"
#include "CommonInputTypeInfo.h"
#include "CommonInputActionData.generated.h"

USTRUCT(BlueprintType)
struct COMMONUI_API FCommonInputActionData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HoldDisplayName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonInputTypeInfo KeyboardInputTypeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonInputTypeInfo DefaultGamepadInputTypeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECommonGamepadType, FCommonInputTypeInfo> GamepadInputTypeInfoOverrides;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonInputTypeInfo GamepadInputTypeInfos[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonInputTypeInfo TouchInputTypeInfo;
    
public:
    FCommonInputActionData();
};

