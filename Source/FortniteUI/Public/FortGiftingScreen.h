#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanelWithItemPreview.h"
#include "GiftingErrorText.h"
#include "FortGiftingScreen.generated.h"

class UCommonButton;
class UCommonButtonGroup;
class UCommonListView;
class UCommonTextBlock;
class UCommonTileView;
class UFortGiftBoxButton;
class UFortGiftBoxItemDefinition;
class UFortStoreFrontOfferInfo;
class UFortUserDetails;
class UImage;
class UMultiLineEditableText;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortGiftingScreen : public UFortActivatablePanelWithItemPreview {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* TabButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortGiftBoxItemDefinition>> GiftBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortGiftBoxItemDefinition*> GiftBoxItemDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortGiftBoxButton* SelectedGiftBoxButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortStoreFrontOfferInfo* OfferInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortUserDetails*> UserDetailArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortUserDetails* LocalPlayerDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultGiftMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGiftingErrorText> GiftingErrorMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGiftingErrorText GiftingErrorMessageDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PersonalizedMessageLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortUserDetails*> SelectedUsers;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_RecipientCurrency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_GiftCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_FriendCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CharCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* ListView_Friends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Continue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Send;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTileView* TileView_GiftBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* ListView_ChosenRecipients;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMultiLineEditableText* Text_EditableMessage;
    
public:
    UFortGiftingScreen();
    UFUNCTION(BlueprintCallable)
    void SetOffer(UFortStoreFrontOfferInfo* NewOfferInfo);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOfferSet(UFortStoreFrontOfferInfo* NewOfferInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveToGiftWrapStep(bool bGiftingToSelf);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveToFriendSelectStep();
    
    UFUNCTION(BlueprintCallable)
    void OnGiftingTimerEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndGiftingSubmission(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginGiftingSubmission();
    
    UFUNCTION(BlueprintCallable)
    void HandleMessageChanged(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void FocusFriendsList();
    
    UFUNCTION(BlueprintCallable)
    void FocusEditableTextMessage();
    
    UFUNCTION(BlueprintCallable)
    void DynamicHandleGiftSent(bool bSuccess, const TArray<FString>& IneligibleAccounts, const TArray<FString>& ErrorCodes);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AllowGiftWrapSelection(bool bIsAllowed);
    
};

