#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortWinterQuestPreviewScreen.generated.h"

class UCommonButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortWinterQuestPreviewScreen : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_OfferOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_OfferTwo;
    
public:
    UFortWinterQuestPreviewScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateOfferTwoText(const FText& OfferText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateOfferOneText(const FText& OfferText);
    
};

