#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortTheaterMapTileType.h"
#include "FortItemInstanceQuantityPair.h"
#include "FortJournalQuestDetails.generated.h"

class UFortQuestItem;
class UFortQuestObjectiveInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortJournalQuestDetails : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItem* CurrentQuest;
    
    UFortJournalQuestDetails();
    UFUNCTION(BlueprintCallable)
    void SetCurrentQuest(UFortQuestItem* InCurrentQuest);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleCurrentQuestChangedBP();
    
public:
    UFUNCTION(BlueprintCallable)
    void GetVisibleObjectives(TArray<UFortQuestObjectiveInfo*>& VisibleObjectives);
    
    UFUNCTION(BlueprintCallable)
    void GetRewards(TArray<FFortItemInstanceQuantityPair>& OutRewards, TArray<FFortItemInstanceQuantityPair>& OutSelectableRewards);
    
    UFUNCTION(BlueprintCallable)
    void GetFutureObjectives(TArray<UFortQuestObjectiveInfo*>& FutureObjectives);
    
    UFUNCTION(BlueprintCallable)
    EFortTheaterMapTileType GetActiveMissionTileType();
    
    UFUNCTION(BlueprintCallable)
    bool CanPlayQuest();
    
    UFUNCTION(BlueprintCallable)
    bool CanPartyLeaderPlayQuest();
    
    UFUNCTION(BlueprintCallable)
    bool CanGotoQuest();
    
};

