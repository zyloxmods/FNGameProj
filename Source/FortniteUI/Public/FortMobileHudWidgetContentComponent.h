#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortMobileHudWidgetContentComponent.generated.h"

class UHUDWidgetBehavior;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class FORTNITEUI_API UFortMobileHudWidgetContentComponent : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHUDWidgetBehavior* WidgetBehavior;
    
public:
    UFortMobileHudWidgetContentComponent();
};

