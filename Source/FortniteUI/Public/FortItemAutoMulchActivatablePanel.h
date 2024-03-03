#pragma once
#include "CoreMinimal.h"
#include "EFortAutoMulchCategory.h"
#include "EFortFrontendInventoryFilter.h"
#include "FortActivatablePanel.h"
#include "FortItemAutoMulchActivatablePanel.generated.h"

class UFortItemManagementScreen;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemAutoMulchActivatablePanel : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UFortItemAutoMulchActivatablePanel();
    UFUNCTION(BlueprintCallable)
    void SetItemManagementScreen(UFortItemManagementScreen* InItemManagementScreen);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SaveSettings();
    
    UFUNCTION(BlueprintCallable)
    void RestoreAutoMulchSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EFortAutoMulchCategory> GetMulchCategoriesForInventoryFilter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortFrontendInventoryFilter GetFrontendInventoryFilter() const;
    
    UFUNCTION(BlueprintCallable)
    void EnterMulchModeForAutoMulch();
    
    UFUNCTION(BlueprintCallable)
    void CacheAutoMulchSettings();
    
};

