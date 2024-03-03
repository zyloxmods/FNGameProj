#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "EMatchmakingCompleteResult.h"
#include "Templates/SubclassOf.h"
#include "FortSubgameSelectScreen.generated.h"

class UFortCampaignPurchaseScreen;
class UFortConsoleProfileWidget;
class UFortLoadingOnDemandContentModal;
class UFortProgressModal;
class UFortSubgameTile;
class UImage;
class USoundBase;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSubgameSelectScreen : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortSubgameTile* SelectedTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortProgressModal* LeavingPartyOrMatchmakingModalInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound_OnActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound_OnSelectedSubGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BoundAnim_Intro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BoundAnim_Outro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SelectModeIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_SpinnerImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortConsoleProfileWidget* XboxOneProfileWidget_ProfileDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSubgameTile* SubgameTile_BattleRoyale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSubgameTile* SubgameTile_Creative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSubgameTile* SubgameTile_Campaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCampaignPurchaseScreen> CampaignPurchaseScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortProgressModal> LeavingPartyOrMatchmakingModal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortLoadingOnDemandContentModal> LoadingContentModal;
    
public:
    UFortSubgameSelectScreen();
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnPartyLeft();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnMatchmakingComplete(EMatchmakingCompleteResult Result);
    
};

