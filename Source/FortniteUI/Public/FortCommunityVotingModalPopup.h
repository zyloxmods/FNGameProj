#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortActivatablePanel.h"
#include "Templates/SubclassOf.h"
#include "FortCommunityVotingModalPopup.generated.h"

class UCommonBorder;
class UCommonButton;
class UCommonTextBlock;
class UDynamicEntryBox;
class UFortCommunityVotingScreen;
class UFortCommunityVotingTileCandidate;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCommunityVotingModalPopup : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle buttonInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCommunityVotingScreen> VotingScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCommunityVotingTileCandidate> CandidateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_VoteNow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonBorder* Border_TapToCloseZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_Banner;
    
public:
    UFortCommunityVotingModalPopup();
private:
    UFUNCTION(BlueprintCallable)
    void HandleVoteButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonArgless();
    
    UFUNCTION(BlueprintCallable)
    void HandleButton(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void Dismiss();
    
};

