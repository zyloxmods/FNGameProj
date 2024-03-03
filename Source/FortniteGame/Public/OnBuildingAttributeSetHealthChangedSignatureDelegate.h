#pragma once
#include "CoreMinimal.h"
#include "OnBuildingAttributeSetHealthChangedSignatureDelegate.generated.h"

class ABuildingProp_DestructionObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBuildingAttributeSetHealthChangedSignature, ABuildingProp_DestructionObject*, DestructionObject, float, Health);

