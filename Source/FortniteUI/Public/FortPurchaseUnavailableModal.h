#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortPurchaseUnavailableModal.generated.h"

class UCommonButton;
class UFortLazyImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPurchaseUnavailableModal : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* Image_OfferIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Confirm;
    
public:
    UFortPurchaseUnavailableModal();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateTextStyle(const FText& OfferDisplayName);
    
};

