#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "FortSocialBanModal.generated.h"

class UCommonButton;
class UCommonRichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSocialBanModal : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_CloseModal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_TimeRemaining;
    
public:
    UFortSocialBanModal();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayModeSet(bool bIsBanned);
    
};

