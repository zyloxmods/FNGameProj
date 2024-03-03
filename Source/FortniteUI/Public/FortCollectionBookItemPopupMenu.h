#pragma once
#include "CoreMinimal.h"
#include "FortPopupMenu.h"
#include "FortCollectionBookItemPopupMenu.generated.h"

class UFortCollectionBookSlotButton;

UCLASS(Blueprintable, EditInlineNew)
class UFortCollectionBookItemPopupMenu : public UFortPopupMenu {
    GENERATED_BODY()
public:
    UFortCollectionBookItemPopupMenu();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleItemUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortCollectionBookSlotButton* GetHostButton() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanItemBeUnslotted();
    
    UFUNCTION(BlueprintCallable)
    bool CanItemBePurchased();
    
};

