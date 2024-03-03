#pragma once
#include "CoreMinimal.h"
#include "AthenaChallengeSetTile.h"
#include "AthenaChallengeSetTile_Mission.generated.h"

class UAthenaChallengeCountdownDisplay;
class UCommonRichTextBlock;
class UImage;
class UTexture2D;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeSetTile_Mission : public UAthenaChallengeSetTile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BundleLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BundleLevelCompletionPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PrestigeShimmerParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ContextColorParamName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_MissionCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ChaseReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_AvailableInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeCountdownDisplay* Countdown_TimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher_LockReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher_MissionIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher_Reward;
    
public:
    UAthenaChallengeSetTile_Mission();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUrgentMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLockedByTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGenericMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetSoftTextureForChaseReward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLevelUpBundle() const;
    
};

