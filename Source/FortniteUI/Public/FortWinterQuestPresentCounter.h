#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortWinterQuestPresentCounter.generated.h"

class UCommonRichTextBlock;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortWinterQuestPresentCounter : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HourHandParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* HourHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_NumberOfPresents;
    
public:
    UFortWinterQuestPresentCounter();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowCountdown(bool bShowCountDown);
    
};

