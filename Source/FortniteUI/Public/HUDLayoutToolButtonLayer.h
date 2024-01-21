#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "HUDLayoutToolButtonLayer.generated.h"

class UCanvasPanel;
class UHUDLayoutToolPlacementWidget;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class UHUDLayoutToolButtonLayer : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel_Combat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel_Build;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel_Persistent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* InternalSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHUDLayoutToolPlacementWidget*> PlacementWidgets;
    
public:
    UHUDLayoutToolButtonLayer();
};

