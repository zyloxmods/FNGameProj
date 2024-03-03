#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CurieContainerHandle.h"
#include "CurieStateDetachedInternalSignatureDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCurieStateDetachedInternalSignature, UObject*, Owner, FCurieContainerHandle, ContainerHandle, const FGameplayTag&, StateIdentifier);

