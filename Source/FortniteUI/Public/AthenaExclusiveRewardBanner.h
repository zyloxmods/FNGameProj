#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaExclusiveRewardBanner.generated.h"

class UCommonRichTextBlock;
class UFortLazyImage;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaExclusiveRewardBanner : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_RewardMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* Image_RewardIcon;
    
public:
    UAthenaExclusiveRewardBanner();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitBannerIcon(const TSoftObjectPtr<UTexture2D>& RewardIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitBanner();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClearBanner();
    
};

