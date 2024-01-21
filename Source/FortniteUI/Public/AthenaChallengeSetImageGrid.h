#pragma once
#include "CoreMinimal.h"
#include "FortChallengeSetStyle.h"
#include "AthenaChallengeSetBaseDetails.h"
#include "AthenaChallengeSetImageGrid.generated.h"

class UAthenaChallengeCountdownDisplay;
class UAthenaChallengeDetailImageGrid;
class UAthenaChallengeListEntry_CompletionReward;
class UAthenaChallengeProgressBar;
class UAthenaChallengeSetListView;
class UCommonButton;
class UCommonTextBlock;
class UFortSwipePanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeSetImageGrid : public UAthenaChallengeSetBaseDetails {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ChallengeContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ChallengeSetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeProgressBar* ChallengeProgress_Completion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeCountdownDisplay* Countdown_TimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSwipePanel* SwipePanel_ChangeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeListEntry_CompletionReward* CompletionReward_Entry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeSetListView* ChallengeDetail_List;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeDetailImageGrid* ChallengeDetail_ImageGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_PreviousSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_NextSet;
    
public:
    UAthenaChallengeSetImageGrid();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChallengeSetEstablished(const FFortChallengeSetStyle& DisplayStyle, bool bIsComplete);
    
    UFUNCTION(BlueprintCallable)
    void ApplyNextSort();
    
};

