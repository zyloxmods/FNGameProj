#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CommonActionHandlerInterface.h"
#include "CommonGlobalInputHandler.generated.h"

UCLASS(Blueprintable)
class COMMONUI_API UCommonGlobalInputHandler : public UObject, public ICommonActionHandlerInterface {
    GENERATED_BODY()
public:
    UCommonGlobalInputHandler();
    
    // Fix for true pure virtual functions not being implemented
};

