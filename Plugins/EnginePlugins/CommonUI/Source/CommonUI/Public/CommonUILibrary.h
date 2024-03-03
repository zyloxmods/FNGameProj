#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "CommonUILibrary.generated.h"

class UWidget;

UCLASS(Blueprintable)
class COMMONUI_API UCommonUILibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCommonUILibrary();
    UFUNCTION(BlueprintCallable)
    static UWidget* FindParentWidgetOfType(UWidget* StartingWidget, TSubclassOf<UWidget> Type);
    
};

