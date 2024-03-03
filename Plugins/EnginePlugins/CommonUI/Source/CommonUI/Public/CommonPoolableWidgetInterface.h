#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CommonPoolableWidgetInterface.generated.h"

UINTERFACE(Blueprintable)
class COMMONUI_API UCommonPoolableWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class COMMONUI_API ICommonPoolableWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReleaseToPool();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAcquireFromPool();
    
};

