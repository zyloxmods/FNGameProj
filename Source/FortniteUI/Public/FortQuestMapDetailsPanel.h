#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Engine/DataTable.h"
#include "FortQuestMapDetailsPanel.generated.h"

class UFortQuestItem;
class UFortQuestItemDefinition;

UCLASS(Blueprintable, EditInlineNew)
class UFortQuestMapDetailsPanel : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PlayButtonTriggeringAction;
    
    UFortQuestMapDetailsPanel();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayInactiveQuest(UFortQuestItemDefinition* QuestDef);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayActiveQuest(UFortQuestItem* QuestItem);
    
};

