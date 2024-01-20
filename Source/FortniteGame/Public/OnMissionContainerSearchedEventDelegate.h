#pragma once
#include "CoreMinimal.h"
#include "OnMissionContainerSearchedEventDelegate.generated.h"

class ABuildingContainer;
class AFortPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnMissionContainerSearchedEvent, ABuildingContainer*, SearchedContainer, AFortPawn*, SearcherPawn);

