#pragma once
#include "CoreMinimal.h"
#include "AthenaItemShopSection.h"
#include "Templates/SubclassOf.h"
#include "AthenaItemShopSection_CommunityVoting.generated.h"

class UDynamicEntryBox;
class UFortCommunityVotingManager;
class UFortCommunityVotingModalPopup;
class UFortCommunityVotingRevealScreen;
class UFortCommunityVotingTile;
class UFortDirectAcquisitionOfferWidget;
class UFortStoreFrontTileWidgetBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaItemShopSection_CommunityVoting : public UAthenaItemShopSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCommunityVotingTile> VotingTileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortDirectAcquisitionOfferWidget> WinningOfferTileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCommunityVotingModalPopup> FirstTimeVoterModalPopupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCommunityVotingRevealScreen> RevealScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FirstTimePopupTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FirstTimePopupBanner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortStoreFrontTileWidgetBase* SelectedCommunityVotingTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_Tiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCommunityVotingManager* VotingManager;
    
public:
    UAthenaItemShopSection_CommunityVoting();
};

