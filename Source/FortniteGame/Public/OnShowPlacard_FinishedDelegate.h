#pragma once
#include "CoreMinimal.h"
#include "OnShowPlacard_FinishedDelegate.generated.h"

class AFortAthenaMutator_ShowPlacard;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShowPlacard_Finished, AFortAthenaMutator_ShowPlacard*, ShowPlacardMutator);

