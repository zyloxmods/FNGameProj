#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaSpatialStyleChallengeUnlockReason.generated.h"

class UCommonRichTextBlock;
class UHorizontalBox;
class UProgressBar;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpatialStyleChallengeUnlockReason : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HBox_MissionProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBar_PercentComplete_Front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBar_PercentComplete_Back;
    
public:
    UAthenaSpatialStyleChallengeUnlockReason();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMissionProgressCount(int32 CompletedCount, int32 RequiredCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowBattlepassPurchaseReason(const FText& InSeason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowBattlepassLevelReason(int32 InLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnlockReasonUpdated(bool bInUnlocked);
    
};

