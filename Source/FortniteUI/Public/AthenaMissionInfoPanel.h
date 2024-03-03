#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortChallengeSetStyle.h"
#include "Templates/SubclassOf.h"
#include "AthenaMissionInfoPanel.generated.h"

class UAthenaChallengeInfoPanelEntry;
class UAthenaChallengeRewardDisplayEntry;
class UAthenaMiniChallengeEntry;
class UCommonButton;
class UCommonTextBlock;
class UDynamicEntryBox;
class UFortPartyMember;
class UImage;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaMissionInfoPanel : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaChallengeInfoPanelEntry> FrontendChallengeInfoEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaMiniChallengeEntry> MiniChallengeInfoEntry;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSuggestedEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceToDailyFirst;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UFortPartyMember>> PartyMembersWithAssistedChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PrestigeShimmerParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ContextColorParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MissionRewardParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_DisplayedChallengeTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ChallengeTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ChallengeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_Challenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_ViewNextMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeRewardDisplayEntry* MissionReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher_MissionIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TimerImage;
    
public:
    UAthenaMissionInfoPanel();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMissionStyle(FFortChallengeSetStyle Style);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleCycleMissionClicked();
    
};

