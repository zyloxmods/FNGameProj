#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CurieContainerHandle.h"
#include "CurieStateAttachedSignatureDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FCurieStateAttachedSignature, UObject*, Owner, FCurieContainerHandle, ContainerHandle, const FGameplayTag&, StateIdentifier);

