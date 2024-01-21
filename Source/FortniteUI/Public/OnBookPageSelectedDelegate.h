#pragma once
#include "CoreMinimal.h"
#include "OnBookPageSelectedDelegate.generated.h"

class UFortCollectionBookPage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBookPageSelected, const UFortCollectionBookPage*, SelectedPage);

