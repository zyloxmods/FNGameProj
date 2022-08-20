#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EQuestUpdateType : uint8 
{
	QuestCompleted,
	ObjectiveUpdated,
	QuestUpdated,
	QuestAndObjectiveUpdate,
	EQuestUpdateType_MAX,
};
