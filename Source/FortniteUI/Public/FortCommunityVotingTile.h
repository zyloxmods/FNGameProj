#pragma once
#include "CoreMinimal.h"
#include "FortStoreFrontTileWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "FortCommunityVotingTile.generated.h"

class UCommonTextBlock;
class UDynamicEntryBox;
class UFortCommunityVotingAvailableVotesWidget;
class UFortCommunityVotingManager;
class UFortCommunityVotingRevealScreen;
class UFortCommunityVotingScreen;
class UFortCommunityVotingTileCandidate;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCommunityVotingTile : public UFortStoreFrontTileWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCommunityVotingScreen> VotingScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCommunityVotingRevealScreen> RevealScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCommunityVotingTileCandidate> CandidateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCommunityVotingManager* VotingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortCommunityVotingTileCandidate*> GenerateCandidates;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EventTileTitle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCommunityVotingAvailableVotesWidget* AvailableSparksWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_Candidates;
    
public:
    UFortCommunityVotingTile();
};

