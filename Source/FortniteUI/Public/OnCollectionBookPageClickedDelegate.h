#pragma once
#include "CoreMinimal.h"
#include "OnCollectionBookPageClickedDelegate.generated.h"

class UFortCollectionBookPage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCollectionBookPageClicked, const UFortCollectionBookPage*, ClickedPage);

