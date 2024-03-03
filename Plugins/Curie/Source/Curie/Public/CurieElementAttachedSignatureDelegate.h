#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CurieContainerHandle.h"
#include "CurieElementAttachedSignatureDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FCurieElementAttachedSignature, UObject*, Owner, FCurieContainerHandle, ContainerHandle, const FGameplayTag&, ElementIdentifier);

