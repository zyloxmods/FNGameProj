#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "BattlePassRewardChallengesEntry.generated.h"

class UCommonTextBlock;
class UFortLazyImage;
class UProgressBar;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBattlePassRewardChallengesEntry : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ObjectiveDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ObjectivesCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBar_ObjectivesCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* Image_CompletedObjective;
    
public:
    UBattlePassRewardChallengesEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetChallenge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChallengeComplete();
    
};

