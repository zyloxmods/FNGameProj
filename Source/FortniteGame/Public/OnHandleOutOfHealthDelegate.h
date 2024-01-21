#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnHandleOutOfHealthDelegate.generated.h"

class AActor;
class AController;
class AFortAthenaVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnHandleOutOfHealth, AFortAthenaVehicle*, DeadVehicle, const FGameplayTagContainer&, InTags, AController*, EventInstigator, AActor*, DamageCauser);

