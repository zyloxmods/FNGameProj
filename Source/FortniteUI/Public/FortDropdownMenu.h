#pragma once
#include "CoreMinimal.h"
#include "CommonPopupMenu.h"
#include "SimpleButtonGroupDelegateDelegate.h"
#include "FortDropdownMenu.generated.h"

class UCommonButton;
class UCommonButtonGroup;

UCLASS(Blueprintable, EditInlineNew)
class UFortDropdownMenu : public UCommonPopupMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleButtonGroupDelegate OnOptionSelected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* ButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCloseOnSelection;
    
public:
    UFortDropdownMenu();
    UFUNCTION(BlueprintCallable)
    void RegisterButton(UCommonButton* Button);
    
private:
    UFUNCTION(BlueprintCallable)
    void InternalOnSelectionChanged(UCommonButton* AssociatedButton, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void InternalOnButtonClicked(UCommonButton* AssociatedButton, int32 ButtonIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedButtonIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonButton* GetSelectedButton() const;
    
    UFUNCTION(BlueprintCallable)
    void DeselectAll();
    
    UFUNCTION(BlueprintCallable)
    void ClearRegisteredButtons();
    
};

