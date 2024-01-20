#pragma once
#include "CoreMinimal.h"
#include "FortChallengeSetStyle.h"
#include "AthenaChallengeListEntryBase.h"
#include "AthenaChallengeListEntry_CompletionReward.generated.h"

class UAthenaChallengeProgressBar;
class UAthenaChallengeRewardDisplay;
class UCommonRichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeListEntry_CompletionReward : public UAthenaChallengeListEntryBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeRewardDisplay* Reward_CompletionReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeProgressBar* ChallengeProgress_ObjectivesCompleted;
    
public:
    UAthenaChallengeListEntry_CompletionReward();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRewardInfoSet(bool bIsCompleted, const FFortChallengeSetStyle& DisplayStyle);
    
};

