#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "EInputActionState.h"
#include "Engine/DataTable.h"
#include "CommonInputActionHandlerData.generated.h"

USTRUCT(BlueprintType)
struct FCommonInputActionHandlerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InputActionRow;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputActionState State;
    
public:
    COMMONUI_API FCommonInputActionHandlerData();
};

