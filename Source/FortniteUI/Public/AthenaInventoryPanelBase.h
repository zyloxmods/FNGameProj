#pragma once
#include "CoreMinimal.h"
#include "EFortQuickBars.h"
#include "FortActivatablePanel.h"
#include "AthenaInventoryPanelBase.generated.h"

class UCommonButtonGroup;
class UFortItem;
class UFortItemTileView;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaInventoryPanelBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemTileView* ResourceView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemTileView* AmmoView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* EquipButtonGroup;
    
public:
    UAthenaInventoryPanelBase();
protected:
    UFUNCTION(BlueprintCallable)
    void SetBypassNotifications(bool bBypass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestEquip(UFortItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleQuickBarChangedBP(EFortQuickBars QuickBarType);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleInventoryItemSelected(UFortItem* Item);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleCursorModeChangedBP(bool bCursorModeEnabled, FName ActionName, UUserWidget* CursorModeContentWidget);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget* CursorModeContentWidget);
    
protected:
    UFUNCTION(BlueprintCallable)
    UFortItemTileView* GetTileViewForItem(UFortItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void FocusTileView(UFortItemTileView* TileView);
    
    UFUNCTION(BlueprintCallable)
    void AttemptToUpdateFocus();
    
    UFUNCTION(BlueprintCallable)
    void AdvanceSelection(UFortItemTileView* TileView);
    
};

