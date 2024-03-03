#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "HUDLayoutToolV2_WidgetPreview.generated.h"

class UBorder;
class UCommonTextBlock;
class UCreateHUDWidgetDragDropOperation;
class UDragDropOperation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UHUDLayoutToolV2_WidgetPreview : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCreateHUDWidgetDragDropOperation* CreateHUDWidgetOperation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DragDistanceThresholdMillimeters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_InstancesLeftCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Border_Background;
    
public:
    UHUDLayoutToolV2_WidgetPreview();
private:
    UFUNCTION(BlueprintCallable)
    void HandleOperationDrop(UDragDropOperation* Operation);
    
};

