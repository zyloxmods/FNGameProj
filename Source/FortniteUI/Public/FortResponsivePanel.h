#pragma once
#include "CoreMinimal.h"
#include "Components/PanelWidget.h"
#include "FortResponsivePanel.generated.h"

class UFortResponsivePanelSlot;
class UWidget;

UCLASS(Blueprintable)
class UFortResponsivePanel : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanStackVertically;
    
    UFortResponsivePanel();
    UFUNCTION(BlueprintCallable)
    UFortResponsivePanelSlot* AddChildToFortResponsivePanel(UWidget* Content);
    
};

