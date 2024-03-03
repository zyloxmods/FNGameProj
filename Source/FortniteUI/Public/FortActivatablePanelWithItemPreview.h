#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortUICameraFrameInterface.h"
#include "FortActivatablePanel.h"
#include "FortActivatablePanelWithItemPreview.generated.h"

class AActor;
class UDataTable;
class UFortItem;
class UFortItemView;
class UWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivatablePanelWithItemPreview : public UFortActivatablePanel, public IFortUICameraFrameInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortItemView* ItemViewObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ItemViewUnifiedSupportsCameraControlInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ItemViewUnifiedZoomInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ItemViewZoomOutInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ItemViewZoomInInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ItemViewRotateInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowItemRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowItemZooming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutomaticallyRegisterCameraView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideFixedCameras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ActionDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AnimationToHideItemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoShowDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bItemDetailsHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HideItemInfoHeaderDurationSecs;
    
public:
    UFortActivatablePanelWithItemPreview();
private:
    UFUNCTION(BlueprintCallable)
    void ShowItemDetails();
    
    UFUNCTION(BlueprintCallable)
    void OnVaultItemsViewed(const TArray<UFortItem*>& Items);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnItemPreviewChanged(AActor* NewPrefab, UFortItem* NewItem);
    
    UFUNCTION(BlueprintCallable)
    void OnCosmeticSpecialActionPressed_7(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnCosmeticSpecialActionPressed_6(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnCosmeticSpecialActionPressed_5(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnCosmeticSpecialActionPressed_4(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnCosmeticSpecialActionPressed_3(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnCosmeticSpecialActionPressed_2(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnCosmeticSpecialActionPressed_1(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnCosmeticSpecialActionPressed_0(bool& bPassThrough);
    
private:
    UFUNCTION(BlueprintCallable)
    void HideItemDetails();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* GetWidgetForFramingViewedItem();
    
    
    // Fix for true pure virtual functions not being implemented
};

