#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "CommonInputTypeInfo.h"
#include "Engine/DataTable.h"
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
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonInputTypeInfo GamepadInputTypeInfos[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonInputTypeInfo TouchInputTypeInfo;
    
public:
    FCommonInputActionData();
};

