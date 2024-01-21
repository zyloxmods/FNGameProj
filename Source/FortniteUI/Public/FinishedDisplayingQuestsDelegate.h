#pragma once
#include "CoreMinimal.h"
#include "FinishedDisplayingQuestsDelegate.generated.h"

class UFortQuestUpdateEntry;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFinishedDisplayingQuests, UFortQuestUpdateEntry*, QuestEntry);

