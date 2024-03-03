#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CurieContainerHandle.h"
#include "CurieStateDetachedSignatureDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FCurieStateDetachedSignature, UObject*, Owner, FCurieContainerHandle, ContainerHandle, const FGameplayTag&, StateIdentifier);

