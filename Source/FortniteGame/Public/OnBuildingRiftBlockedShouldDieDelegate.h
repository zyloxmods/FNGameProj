#pragma once
#include "CoreMinimal.h"
#include "OnBuildingRiftBlockedShouldDieDelegate.generated.h"

class AActor;
class ABuildingRift;
class AController;
class UFortAIEncounterInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnBuildingRiftBlockedShouldDie, UFortAIEncounterInfo*, Encounter, ABuildingRift*, Rift, AController*, EventInvestigator, AActor*, DamageCauser);

