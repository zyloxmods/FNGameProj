#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortGiftRecipientsTab.generated.h"

class UCommonListView;
class UCommonTextBlock;
class UFortStoreFrontOfferInfo;

UCLASS(Blueprintable, EditInlineNew)
class UFortGiftRecipientsTab : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_FriendCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* ListView_Friends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortStoreFrontOfferInfo* OfferInfo;
    
public:
    UFortGiftRecipientsTab();
};

