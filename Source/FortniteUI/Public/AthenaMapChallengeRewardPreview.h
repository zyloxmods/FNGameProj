#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaMapChallengeRewardPreview.generated.h"

class UCommonRichTextBlock;
class UCommonTextBlock;
class UFortCosmeticItemCard;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class UAthenaMapChallengeRewardPreview : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_RewardName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCosmeticItemCard* ItemCard_RewardIcon;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CycleDelay;
    
public:
    UAthenaMapChallengeRewardPreview();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReplayIntroAnim();
    
};

