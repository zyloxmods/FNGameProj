#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortBangWrapper_NUI.h"
#include "FortTutorialQuestVisibilityWrapper.generated.h"

class UFortQuestItemDefinition;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTutorialQuestVisibilityWrapper : public UFortBangWrapper_NUI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* QuestItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle QuestObjectiveStat;
    
    UFortTutorialQuestVisibilityWrapper();
private:
    UFUNCTION(BlueprintCallable)
    void HandleCurrentQuestsChanged();
    
};

