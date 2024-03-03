#pragma once
#include "CoreMinimal.h"
#include "MinigameWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "MinigameHUD_SpectatorLeaderboard.generated.h"

class UFortDynamicEntryBox;
class UFortMinigameStatFilter;
class UMinigameHUD_SpectatorLeaderboardEntry;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMinigameHUD_SpectatorLeaderboard : public UMinigameWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMinigameStatFilter> ScoreStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMinigameStatFilter> ItemCollectStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMinigameStatFilter> LapTimeStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMinigameStatFilter> TimeAliveStat;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDynamicEntryBox* EntryBox_LeaderboardEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMinigameHUD_SpectatorLeaderboardEntry> OutsideTopThreeEntryClass;
    
public:
    UMinigameHUD_SpectatorLeaderboard();
};

