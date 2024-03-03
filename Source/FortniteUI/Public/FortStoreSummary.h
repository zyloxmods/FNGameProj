#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "Card.h"
#include "FortItemManagementMulchPanel.h"
#include "Templates/SubclassOf.h"
#include "FortStoreSummary.generated.h"

class UCommonTileView;
class UFortMulchConfirmationModalWidget;
class UStoreCardObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortStoreSummary : public UCommonActivatablePanel, public IFortItemManagementMulchPanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStoreCardObject*> StoreCardObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTileView* TileView;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMulchConfirmationModalWidget> MulchConfirmationModalClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortMulchConfirmationModalWidget* MulchConfirmationModal;
    
public:
    UFortStoreSummary();
    UFUNCTION(BlueprintCallable)
    void ShowMulchConfirmationModal();
    
    UFUNCTION(BlueprintCallable)
    void SetIsInChoiceSelectionMode(bool InIsInChoiceSelectionMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCards(const TArray<FCard>& Cards);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyPanelDeactivated();
    
    UFUNCTION(BlueprintCallable)
    void NotifyPanelActivated();
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkDefaultItemsForMulch();
    
    UFUNCTION(BlueprintCallable)
    void HideMulchConfirmationModal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleContextMenuOpenChangedBP(bool bIsOpen);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleContextMenuOpenChanged(bool bIsOpen);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInChoiceSelectionMode() const;
    
    UFUNCTION(BlueprintCallable)
    void FinalizeFavoriteStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseSummaryScreen();
    
    
    // Fix for true pure virtual functions not being implemented
};

