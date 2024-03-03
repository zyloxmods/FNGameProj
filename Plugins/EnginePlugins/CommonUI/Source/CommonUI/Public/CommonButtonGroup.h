#pragma once
#include "CoreMinimal.h"
#include "CommonWidgetGroupBase.h"
#include "OnSelectionClearedDelegate.h"
#include "SimpleButtonGroupDelegateDelegate.h"
#include "CommonButtonGroup.generated.h"

class UCommonButton;

UCLASS(Blueprintable)
class COMMONUI_API UCommonButtonGroup : public UCommonWidgetGroupBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleButtonGroupDelegate OnSelectedButtonChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleButtonGroupDelegate OnHoveredButtonChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleButtonGroupDelegate OnButtonClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleButtonGroupDelegate OnButtonDoubleClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectionCleared OnSelectionCleared;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelectionRequired;
    
public:
    UCommonButtonGroup();
    UFUNCTION(BlueprintCallable)
    void SetSelectionRequired(bool bRequireSelection);
    
    UFUNCTION(BlueprintCallable)
    void SelectPreviousButton(bool bAllowWrap);
    
    UFUNCTION(BlueprintCallable)
    void SelectNextButton(bool bAllowWrap);
    
    UFUNCTION(BlueprintCallable)
    void SelectButtonAtIndex(int32 ButtonIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSelectionStateChanged(UCommonButton* BaseButton, bool bIsSelected);
    
    UFUNCTION(BlueprintCallable)
    void OnHandleButtonDoubleClicked(UCommonButton* BaseButton);
    
    UFUNCTION(BlueprintCallable)
    void OnHandleButtonClicked(UCommonButton* BaseButton);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonUnhovered(UCommonButton* BaseButton);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonHovered(UCommonButton* BaseButton);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyButtons() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedButtonIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonButton* GetSelectedButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHoveredButtonIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetButtonCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonButton* GetButtonAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindButtonIndex(const UCommonButton* ButtonToFind) const;
    
    UFUNCTION(BlueprintCallable)
    void DeselectAll();
    
};

