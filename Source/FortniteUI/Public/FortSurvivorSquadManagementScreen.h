#pragma once
#include "CoreMinimal.h"
#include "FortSquadManagementScreenBase.h"
#include "FortSurvivorSquadSlottingFeedbackData.h"
#include "FortSurvivorSquadManagementScreen.generated.h"

class UFortSurvivorSquadStatMatchesBase;
class UFortWorker;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSurvivorSquadManagementScreen : public UFortSquadManagementScreenBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSurvivorSquadStatMatchesBase* StatMatchesWidget;
    
public:
    UFortSurvivorSquadManagementScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCycleButtons();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowHelpDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFeedbackForSlottingPerson(UFortWorker* Worker, int32 SlotIndex, const FFortSurvivorSquadSlottingFeedbackData& FeedbackData);
    
};

