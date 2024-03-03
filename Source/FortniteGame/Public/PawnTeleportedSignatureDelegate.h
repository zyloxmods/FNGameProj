#pragma once
#include "CoreMinimal.h"
#include "PawnTeleportedSignatureDelegate.generated.h"

class AFortPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPawnTeleportedSignature, AFortPawn*, FortPawn);

