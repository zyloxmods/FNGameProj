#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CreativePropertyEditWidgetBase.generated.h"

class UCommonButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCreativePropertyEditWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> AvailableStepperValueLabels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentIndexInStepperValue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Collapse;
    
public:
    UCreativePropertyEditWidgetBase();
    UFUNCTION(BlueprintCallable)
    void SetIsModified(bool bModified);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetStepperLabelForIndex(const int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsModified();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetEntryDisplayValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetEntryDisplayName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetEntryDescriptionText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PostInitEditWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnModified(bool bModified);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnEditWidgetClicked();
    
};

