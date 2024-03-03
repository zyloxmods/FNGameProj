#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "Templates/SubclassOf.h"
#include "AthenaInventoryPanelBase.generated.h"

class UAthenaQuickbarEditorBase;
class UCommonActivatableWidgetSwitcher;
class UCommonButton;
class UFortCreativeItemListMenu;
class UFortCreativeItemListPanelData;
class UFortCreativeSettingsFlow;
class UFortItem;
class UFortItemTileView;
class UFortTabListWidgetBase;
class UPanelWidget;
class UScaleBox;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaInventoryPanelBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortItemTileView* CachedLastFocusView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItem* CachedLastFocusItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortItemTileView*> InventorySections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortCreativeSettingsFlow> MyIslandWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortCreativeItemListMenu> CreativeInventoryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButton> TabButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCreativeItemListPanelData> ItemListPanelDataClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemTileView* ResourceView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemTileView* AmmoView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaQuickbarEditorBase* QuickbarEditor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* ScaleBox_Leto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTabListWidgetBase* TabList_Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidgetSwitcher* Switcher_InventoryTabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SwitcherIndex_Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_MyIslandHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SwitcherIndex_MyIsland;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortCreativeSettingsFlow* MyIslandWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_CreativeInventoryHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SwitcherIndex_CreativeInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortCreativeItemListMenu* CreativeInventoryWidget;
    
public:
    UAthenaInventoryPanelBase();
protected:
    UFUNCTION(BlueprintCallable)
    void SetBypassNotifications(bool bBypass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestEquip(UFortItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenInventoryTab(int32 TabIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleInventoryItemSelected(UFortItem* Item);
    
protected:
    UFUNCTION(BlueprintCallable)
    UFortItemTileView* GetTileViewForItem(UFortItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetMyIslandWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetCreativeInventoryWidget();
    
    UFUNCTION(BlueprintCallable)
    void FocusTileView(UFortItemTileView* TileView);
    
    UFUNCTION(BlueprintCallable)
    void AttemptToUpdateFocus();
    
    UFUNCTION(BlueprintCallable)
    void AdvanceSelection(UFortItemTileView* TileView);
    
};

