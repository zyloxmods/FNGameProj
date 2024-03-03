#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "HardcoreModifierPreviewPane.generated.h"

class UCommonTextBlock;
class UFortLazyImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UHardcoreModifierPreviewPane : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* Image_ChallengePreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_CurrentChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Top50Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Top25Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Top10Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Top5Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_VRCount;
    
public:
    UHardcoreModifierPreviewPane();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAccoladeCount(int32 AccoladeRank, int32 NumTimesEarned);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleMaxLevelCompleted(int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleModifierChanged();
    
};

