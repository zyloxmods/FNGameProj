#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortUIStateWidgetBase.generated.h"

class UCommonActivatableWidgetStack;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortUIStateWidgetBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidgetStack* WidgetStack_PrimaryContent;
    
public:
    UFortUIStateWidgetBase();
};

