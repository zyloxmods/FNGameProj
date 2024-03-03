#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidgetContainerBase.h"
#include "Templates/SubclassOf.h"
#include "CommonActivatableWidgetStack.generated.h"

class UCommonActivatableWidget;

UCLASS(Blueprintable)
class COMMONUI_API UCommonActivatableWidgetStack : public UCommonActivatableWidgetContainerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonActivatableWidget> RootContentWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidget* RootContentWidget;
    
public:
    UCommonActivatableWidgetStack();
};

