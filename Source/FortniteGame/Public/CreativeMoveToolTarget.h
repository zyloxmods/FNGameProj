#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CreativeMoveToolTarget.generated.h"

UINTERFACE(Blueprintable)
class UCreativeMoveToolTarget : public UInterface {
    GENERATED_BODY()
};

class ICreativeMoveToolTarget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnPreviewStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnPreviewEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsValidPlacement();
    
};

