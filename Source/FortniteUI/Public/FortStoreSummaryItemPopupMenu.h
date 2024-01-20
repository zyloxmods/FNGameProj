#pragma once
#include "CoreMinimal.h"
#include "FortPopupMenu.h"
#include "FortStoreSummaryItemPopupMenu.generated.h"

class UFortStoreSummaryItemButton;

UCLASS(Blueprintable, EditInlineNew)
class UFortStoreSummaryItemPopupMenu : public UFortPopupMenu {
    GENERATED_BODY()
public:
    UFortStoreSummaryItemPopupMenu();
protected:
    UFUNCTION(BlueprintCallable)
    void MulchItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortStoreSummaryItemButton* GetHostButton() const;
    
};

