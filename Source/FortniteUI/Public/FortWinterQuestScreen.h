#pragma once
#include "CoreMinimal.h"
#include "EWinterQuestViewState.h"
#include "FortEventLevelScreen.h"
#include "FortWinterQuestScreen.generated.h"

class UCommonButton;
class UFortGiftingScreen;
class UFortQuestItem;
class UFortStoreFrontOfferDetailsWidgetBase;
class UFortWinterQuestDayCounter;
class UFortWinterQuestIntroScreen;
class UFortWinterQuestLobbyHeader;
class UFortWinterQuestNewChallengeModal;
class UFortWinterQuestPresentCounter;
class UFortWinterQuestPresentScreen;
class UFortWinterQuestPreviewScreen;
class UFortWinterQuestSpecialInteractionScreen;
class UFortWinterQuestUnlockedScreen;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortWinterQuestScreen : public UFortEventLevelScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortStoreFrontOfferDetailsWidgetBase* PurchaseScreenInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortWinterQuestNewChallengeModal* ChallengeModalInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortGiftingScreen* GiftingScreenInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_MoreInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_CloseScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Spoilers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortWinterQuestIntroScreen* WinterQuestIntroScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortWinterQuestLobbyHeader* WinterQuestLobbyHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortWinterQuestPreviewScreen* WinterQuestPreviewScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortWinterQuestUnlockedScreen* WinterQuestUnlockedScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortWinterQuestPresentScreen* WinterQuestPresentScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortWinterQuestSpecialInteractionScreen* WinterQuestStockingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortWinterQuestSpecialInteractionScreen* WinterQuestTreeScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortWinterQuestPresentCounter* WinterQuestPresentCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortWinterQuestDayCounter* WinterQuestDayCounter;
    
public:
    UFortWinterQuestScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUserExitCabin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetAllUIVisibilityState(bool bIsHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScreenStateChanged(EWinterQuestViewState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPresentOpened();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnQuestsGranted(const TArray<UFortQuestItem*>& Quests);
    
};

