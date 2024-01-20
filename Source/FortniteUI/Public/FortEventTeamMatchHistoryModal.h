#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortEventTeamMatchHistoryModal.generated.h"

class UCommonListView;
class UCommonTextBlock;
class UFortEventLeaderboardEntryData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortEventTeamMatchHistoryModal : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* ListView_MatchHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_TeamNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortEventLeaderboardEntryData* LeaderboardEntryData;
    
public:
    UFortEventTeamMatchHistoryModal();
protected:
    UFUNCTION(BlueprintCallable)
    void SetupMatchHistory(const UFortEventLeaderboardEntryData* DataForDisplay);
    
};

