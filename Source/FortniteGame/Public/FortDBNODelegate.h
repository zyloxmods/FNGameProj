#pragma once
#include "CoreMinimal.h"
#include "FortDBNODelegate.generated.h"

class AController;
class AFortAIPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFortDBNO, AFortAIPawn*, DownedAI, AController*, DownedInstigator);

