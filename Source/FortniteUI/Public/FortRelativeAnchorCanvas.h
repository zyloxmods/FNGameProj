#pragma once
#include "CoreMinimal.h"
#include "Components/PanelWidget.h"
#include "FortRelativeAnchorCanvas.generated.h"

class UFortRelativeAnchorCanvasSlot;
class UWidget;

UCLASS(Blueprintable)
class UFortRelativeAnchorCanvas : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZLayerOffset;
    
    UFortRelativeAnchorCanvas();
    UFUNCTION(BlueprintCallable)
    void SetZLayerOffset(const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    UFortRelativeAnchorCanvasSlot* AddSlot(const UWidget* ContentWidget, const UWidget* AnchorWidget);
    
};

