#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
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

