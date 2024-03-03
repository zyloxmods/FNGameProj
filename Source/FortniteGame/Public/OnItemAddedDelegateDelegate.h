#pragma once
#include "CoreMinimal.h"
#include "OnItemAddedDelegateDelegate.generated.h"

class IFortInventoryOwnerInterface;
class UFortInventoryOwnerInterface;
class UFortItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemAddedDelegate, UFortItem*, Item, TScriptInterface<IFortInventoryOwnerInterface>, InventoryOwner);

