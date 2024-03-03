#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortStoreSkinDetailsPopup.generated.h"

class UCommonRichTextBlock;
class UDataTable;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortStoreSkinDetailsPopup : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* OfferTagTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_ItemPrompt;
    
public:
    UFortStoreSkinDetailsPopup();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequuestFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestFadeIn();
    
};

