#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "OnRotatedDelegate.h"
#include "CommonRotator.generated.h"

class UCommonTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class COMMONUI_API UCommonRotator : public UCommonButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRotated OnRotated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* MyText;
    
public:
    UCommonRotator();
    UFUNCTION(BlueprintCallable)
    void ShiftTextRight();
    
    UFUNCTION(BlueprintCallable)
    void ShiftTextLeft();
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedItem(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void PopulateTextLabels(TArray<FText> Labels);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSelectedText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedIndex() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnOptionsPopulated(int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnOptionSelected(int32 Index);
    
};

