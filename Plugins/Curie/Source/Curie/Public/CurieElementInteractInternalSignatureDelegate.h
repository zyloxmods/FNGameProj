#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CurieContainerHandle.h"
#include "CurieElementInteractInternalSignatureDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCurieElementInteractInternalSignature, UObject*, Owner, FCurieContainerHandle, ContainerHandle, const FGameplayTag&, ElementIdentifier);

