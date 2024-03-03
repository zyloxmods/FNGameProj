#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SpecialNavActorInteractionDelegate.generated.h"

class AFortEventLevelNavigationActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSpecialNavActorInteraction, FGameplayTag, InteractionTag, FGameplayTag, CameraTag, AFortEventLevelNavigationActor*, InActor);

