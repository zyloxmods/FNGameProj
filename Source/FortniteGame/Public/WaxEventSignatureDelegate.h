#pragma once
#include "CoreMinimal.h"
#include "WaxEventSignatureDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWaxEventSignature, AFortPlayerStateAthena*, WaxSubject, int32, WaxAmount);

