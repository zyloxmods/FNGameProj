#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortQuickBars.h"
#include "AthenaQuickbarEditorBase.generated.h"

class UCommonButtonGroup;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaQuickbarEditorBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* EquipButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckVisibilityBasedOffInventoryCapacity;
    
public:
    UAthenaQuickbarEditorBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleQuickBarChangedBP(EFortQuickBars QuickBarType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetFirstEquipSlotButton() const;
    
    UFUNCTION(BlueprintCallable)
    void DeselectAllButtons();
    
};

