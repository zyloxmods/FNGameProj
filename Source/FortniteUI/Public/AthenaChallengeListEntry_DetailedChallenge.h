#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AthenaChallengeListEntry_Challenge.h"
#include "AthenaChallengeListEntry_DetailedChallenge.generated.h"

class UAthenaChallengeRewardDisplay;
class UButton;
class UCommonButton;
class UCommonRichTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeListEntry_DetailedChallenge : public UAthenaChallengeListEntry_Challenge {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasAnyOptionsAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDisplayingChallengeActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BackAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CloseChallengeOptionsAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BoundAnim_ShowChallengeOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* SimpleButton_TopClickArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeRewardDisplay* Reward_QuestReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_PartyAssist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_ReplaceChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_ActionInfo;
    
public:
    UAthenaChallengeListEntry_DetailedChallenge();
private:
    UFUNCTION(BlueprintCallable)
    void HandleUpperAreaClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleCloseChallengeOptionsInputAction(bool& bPassThrough);
    
};

