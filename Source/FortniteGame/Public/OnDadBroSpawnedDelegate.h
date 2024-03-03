#pragma once
#include "CoreMinimal.h"
#include "OnDadBroSpawnedDelegate.generated.h"

class AFortAIPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDadBroSpawned, AFortAIPawn*, DadBro);

