#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PawnLandedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPawnLandedSignature, const FHitResult&, Hit);

