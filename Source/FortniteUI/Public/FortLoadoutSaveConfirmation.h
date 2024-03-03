#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortLoadoutSaveConfirmation.generated.h"

class UCommonButton;
class UFortCosmeticLoadoutCardButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLoadoutSaveConfirmation : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCosmeticLoadoutCardButton* Button_SaveCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCosmeticLoadoutCardButton* Button_SaveAsNew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_MobileClose;
    
public:
    UFortLoadoutSaveConfirmation();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCanSaveAsNew(bool bCanSaveAsNew);
    
};

