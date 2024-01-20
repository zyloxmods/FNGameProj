#pragma once
#include "CoreMinimal.h"
#include "OnCollectionBookPageSelectedDelegate.generated.h"

class UFortCollectionBookPage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCollectionBookPageSelected, const UFortCollectionBookPage*, SelectedPage);

