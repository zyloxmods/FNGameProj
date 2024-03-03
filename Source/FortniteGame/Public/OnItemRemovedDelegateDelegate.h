#pragma once
#include "CoreMinimal.h"
#include "OnItemRemovedDelegateDelegate.generated.h"

class IFortInventoryOwnerInterface;
class UFortInventoryOwnerInterface;
class UFortItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemRemovedDelegate, UFortItem*, Item, TScriptInterface<IFortInventoryOwnerInterface>, InventoryOwner);

