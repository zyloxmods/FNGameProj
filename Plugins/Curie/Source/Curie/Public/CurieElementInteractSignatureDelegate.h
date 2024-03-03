#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CurieContainerHandle.h"
#include "CurieElementInteractSignatureDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FCurieElementInteractSignature, UObject*, Owner, FCurieContainerHandle, ContainerHandle, const FGameplayTag&, ElementIdentifier);

