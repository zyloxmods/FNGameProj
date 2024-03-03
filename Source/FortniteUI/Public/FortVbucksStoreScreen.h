#pragma once
#include "CoreMinimal.h"
#include "FortMtxStoreRootBase.h"
#include "FortVbucksStoreScreen.generated.h"

class UCommonRichTextBlock;
class UDynamicEntryBox;
class UFortRealMoneyOffer;
class UFortStoreBanner;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortVbucksStoreScreen : public UFortMtxStoreRootBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_VBuckOffers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_OfferMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortStoreBanner* StoreBanner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortRealMoneyOffer* LastSelectedOffer;
    
public:
    UFortVbucksStoreScreen();
};

