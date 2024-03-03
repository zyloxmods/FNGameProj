#pragma once
#include "CoreMinimal.h"
#include "FortChallengeMapPoiData.h"
#include "GameplayTagContainer.h"
#include "AthenaSpatialScreen.h"
#include "SelectedChallengesData.h"
#include "SpatialMapScreen.generated.h"

class UAthenaChallengeCountdownDisplay;
class UAthenaChallengePageRotator;
class UAthenaChallengePageView;
class UAthenaCosmeticUnlockingInfo;
class UAthenaFrontEndMapIconsOverlay;
class UAthenaMapChallengeCategoryRotator;
class UAthenaMapChallengeListView;
class UAthenaMapChallengeRewardPreview;
class UCommonBoundActionBar;
class UCommonButton;
class UFortItemBaseWidget;
class UFortQuestItemDefinition;
class UImage;
class USpatialMapPreviewScreen;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, Config=Engine, DefaultConfig, EditInlineNew, Config=Game)
class USpatialMapScreen : public UAthenaSpatialScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpatialMapPreviewScreen* Screen_Preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Gradient_Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonBoundActionBar* Bar_Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMapChallengeRewardPreview* Card_RewardPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeCountdownDisplay* ChallengeCountdownDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaFrontEndMapIconsOverlay* Overlay_MapIconsOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengePageRotator* Rotator_ChallengePage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMapChallengeCategoryRotator* Rotator_ChallengeCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMapChallengeListView* ListView_NonLocationIconsBelowMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengePageView* PageView_SelectedChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBox_LeftContents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Inspect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_RewardPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_PreviousPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_NextPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaCosmeticUnlockingInfo* Item_UnlockInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemBaseWidget* Item_HeaderInfo;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawPOIs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnimateIntroIconsMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortChallengeMapPoiData> PoiDataConfigOverrides;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ExcludedFromMapNameDisplayPOIs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpybaseTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* NamedLocationQuestItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* POIQuestItemDefinition;
    
public:
    USpatialMapScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRewardPreviewVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTabCycled(bool bCanShowCompletedCount, int32 ChallengesNum, int32 CountOfCompletedChallenges);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectedChallengesChanged(int32 CountOfSelected, const FSelectedChallengesData& SelectedChallengesData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCycleIconClicked();
    
};

