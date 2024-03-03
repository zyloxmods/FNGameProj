#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AthenaChallengeSetDetails.h"
#include "AthenaChallengeSetDetails_Missions.generated.h"

class UAthenaChallengeDetailRewardTrack;
class UCommonButton;
class UCommonTextBlock;
class UOverlay;
class UTexture2D;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeSetDetails_Missions : public UAthenaChallengeSetDetails {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentBundleItemLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PrestigeShimmerParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ContextColorParamName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle NextRewardInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PrevRewardInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeDetailRewardTrack* ChallengeDetails_Rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_LevelUpBundle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_RewardUnlockTip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* PrestiegeUpsell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher_ProgressDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher_MissionIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher_BundleState;
    
public:
    UAthenaChallengeSetDetails_Missions();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void VeiwingBundleLevelChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLevelUpBundleButtonText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBundlePrestiged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUrgentMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGenericMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentlyViewPrestige() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HidePriestigeInfo(bool bHidePriestigeUpsell);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetChaseRewardForBundleLevel(int32 BundleLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLevelBundle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BundleHasMultipleLevels() const;
    
};

