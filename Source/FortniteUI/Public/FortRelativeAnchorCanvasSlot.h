#pragma once
#include "CoreMinimal.h"
#include "Components/PanelSlot.h"
#include "FortRelativeAnchorCanvasSlot.generated.h"

class UWidget;

UCLASS(Blueprintable)
class UFortRelativeAnchorCanvasSlot : public UPanelSlot {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWidget> AnchorWidget;
    
    UFortRelativeAnchorCanvasSlot();
    UFUNCTION(BlueprintCallable)
    void SetAnchorWidget(const UWidget* NewAnchorWidget);
    
};

