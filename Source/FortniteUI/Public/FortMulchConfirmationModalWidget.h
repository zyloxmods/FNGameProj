#pragma once
#include "CoreMinimal.h"
#include "EItemRecyclingWarning.h"
#include "FortActivatablePanel.h"
#include "FortMulchConfirmationModalWidget.generated.h"

class IFortItemManagementMulchPanel;
class UFortItemManagementMulchPanel;
class UCommonTileView;
class UFortInventoryContext;
class UFortItemManagementMulchDetailsPanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMulchConfirmationModalWidget : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortItemManagementMulchPanel> HostItemManagementMulchPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTileView* RecycleItemTileView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemManagementMulchDetailsPanel* RecycleDetailsPanel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortInventoryContext* InventoryContext;
    
public:
    UFortMulchConfirmationModalWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateConfirmationModal_BP();
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateConfirmationModal();
    
public:
    UFUNCTION(BlueprintCallable)
    TMap<EItemRecyclingWarning, int32> GetMulchWarnings();
    
    UFUNCTION(BlueprintCallable)
    void CommitMulch();
    
};

