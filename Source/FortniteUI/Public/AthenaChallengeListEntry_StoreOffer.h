#pragma once
#include "CoreMinimal.h"
#include "AthenaChallengeListEntryBase.h"
#include "AthenaChallengeListEntry_StoreOffer.generated.h"

class UButton;
class UCommonRichTextBlock;
class UFortLazyImage;
class UFortStoreFrontOfferDetailsWidgetBase;
class UFortStoreFrontOfferInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeListEntry_StoreOffer : public UAthenaChallengeListEntryBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortStoreFrontOfferDetailsWidgetBase> OfferDetailsWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortStoreFrontOfferInfo* OfferInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* SimpleButton_ClickArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* LazyImage_SpecialOffer;
    
public:
    UAthenaChallengeListEntry_StoreOffer();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOfferSet();
    
    UFUNCTION(BlueprintCallable)
    void HandleClicked();
    
};

