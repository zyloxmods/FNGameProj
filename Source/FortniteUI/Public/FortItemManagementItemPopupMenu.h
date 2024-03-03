#pragma once
#include "CoreMinimal.h"
#include "FortPopupMenu.h"
#include "FortItemManagementItemPopupMenu.generated.h"

class UFortItemManagementItemTileButton;

UCLASS(Blueprintable, EditInlineNew)
class UFortItemManagementItemPopupMenu : public UFortPopupMenu {
    GENERATED_BODY()
public:
    UFortItemManagementItemPopupMenu();
protected:
    UFUNCTION(BlueprintCallable)
    void MulchItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
    
    UFUNCTION(BlueprintCallable)
    void HandleCompareAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItemManagementItemTileButton* GetHostButton() const;
    
};

