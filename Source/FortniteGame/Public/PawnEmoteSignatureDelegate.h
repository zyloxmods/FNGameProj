#pragma once
#include "CoreMinimal.h"
#include "PawnEmoteSignatureDelegate.generated.h"

class AFortPawn;
class UFortItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPawnEmoteSignature, UFortItemDefinition*, MontageItemDef, AFortPawn*, PawnEmoting);

