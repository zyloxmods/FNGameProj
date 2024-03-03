#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "AthenaMiniChallenges.generated.h"

class UDynamicEntryBox;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaMiniChallenges : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_MiniChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlacedAtEndOfMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 UpdatingWidgets;
    
public:
    UAthenaMiniChallenges();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InspectModeEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearQuestDescriptions();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddQuestDetails(const FText& QuestDescription, int32 AchivedCount, int32 GoalCount);
    
};

