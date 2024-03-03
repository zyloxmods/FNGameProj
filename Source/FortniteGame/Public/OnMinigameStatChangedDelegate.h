#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EFortQuestObjectiveStatEvent.h"
#include "OnMinigameStatChangedDelegate.generated.h"

class AFortPlayerController;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FOnMinigameStatChanged, EFortQuestObjectiveStatEvent, Type, UObject*, TargetObject, AFortPlayerController*, PlayerController, const FGameplayTagContainer&, TargetTags, const FGameplayTagContainer&, SourceTags, const FGameplayTagContainer&, ContextTags, int32, Count);

