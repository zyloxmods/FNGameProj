#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CurieContainerHandle.h"
#include "CurieElementDetachedSignatureDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FCurieElementDetachedSignature, UObject*, Owner, FCurieContainerHandle, ContainerHandle, const FGameplayTag&, ElementIdentifier);

