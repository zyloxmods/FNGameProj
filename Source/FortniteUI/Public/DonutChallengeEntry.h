#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "DonutChallengeEntry.generated.h"

class UAthenaChallengeProgressBar;
class UCommonTextBlock;
class UFortLazyImage;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UDonutChallengeEntry : public UCommonButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* Image_Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Completed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeProgressBar* ProgressBar_Challenge;
    
public:
    UDonutChallengeEntry();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPIsCompleted(bool InCompletion);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPHasRewardTexture(bool InHasReward);
    
};

