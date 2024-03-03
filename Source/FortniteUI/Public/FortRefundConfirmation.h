#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "FortRefundConfirmation.generated.h"

class UCommonButton;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortRefundConfirmation : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_AreYouSure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Yes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_No;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_CloseMobile;
    
public:
    UFortRefundConfirmation();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRefundsRemainingText(int32 RefundsRemaining, int32 TotalRefunds);
    
};

