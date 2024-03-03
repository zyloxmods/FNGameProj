#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "AthenaCareerScreen.generated.h"

class UAthenaFeatTimelineListView;
class UAthenaLeaderboardScreenBase;
class UAthenaReplayBrowserScreenBase;
class UCommonButton;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UAthenaCareerScreen : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAthenaLeaderboardScreenBase> LeaderboardsScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAthenaReplayBrowserScreenBase> ReplayBrowserScreenClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_AccountLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Leaderboards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Replays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaFeatTimelineListView* ListView_FeatTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ChapterContext;
    
public:
    UAthenaCareerScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowFeats(bool bHasCompletedFeats);
    
};

