#pragma once
#include "CoreMinimal.h"
#include "FortSquadSlotItemDetailElementWidget.h"
#include "FortSquadSlotSurvivorTraitMatchesDetailWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortSquadSlotSurvivorTraitMatchesDetailWidget : public UFortSquadSlotItemDetailElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSquadLeaderSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LeaderMatchesSquadType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubordinatePersonalityMatchCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MatchesLeaderPersonality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MatchingSetBonusCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SetBonusSize;
    
public:
    UFortSquadSlotSurvivorTraitMatchesDetailWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleTraitValuesUpdatedBP();
    
};

