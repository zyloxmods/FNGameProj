#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortGadgetsWidgetBase.generated.h"

class UFortLazyImage;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortGadgetsWidgetBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* GadgetIcon1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* GadgetIcon2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortLazyImage*> Gadgets;
    
public:
    UFortGadgetsWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* OnGenerateTooltipWidget(const FText& Header, const FText& Description);
    
};

