#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "Templates/SubclassOf.h"
#include "FortEventPlayerStatProfileSelector.generated.h"

class UAthenaStatsScreenBase;
class UCommonListView;
class UCommonTextBlock;
class UFortEventLeaderboardEntryData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortEventPlayerStatProfileSelector : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* ProfileList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* HoveredName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaStatsScreenBase> StatsScreenClass;
    
public:
    UFortEventPlayerStatProfileSelector();
protected:
    UFUNCTION(BlueprintCallable)
    void SetProfilesByLeaderboardData(const UFortEventLeaderboardEntryData* DataForDisplay);
    
};

