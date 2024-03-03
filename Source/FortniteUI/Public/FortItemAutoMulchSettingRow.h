#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "EFortAutoMulchCategory.h"
#include "FortItemAutoMulchSettingRow.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemAutoMulchSettingRow : public UCommonButton {
    GENERATED_BODY()
public:
    UFortItemAutoMulchSettingRow();
    UFUNCTION(BlueprintCallable)
    void SetAutoMulchCategory(EFortAutoMulchCategory NewCategory);
    
    UFUNCTION(BlueprintCallable)
    void SelectPreviousAutoMulchMode();
    
    UFUNCTION(BlueprintCallable)
    void SelectNextAutoMulchMode();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleAutoMulchModeChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleAutoMulchCategoryChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAutoMulchModeText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAutoMulchCategoryText() const;
    
};

