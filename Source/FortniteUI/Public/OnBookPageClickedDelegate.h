#pragma once
#include "CoreMinimal.h"
#include "OnBookPageClickedDelegate.generated.h"

class UFortCollectionBookPage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBookPageClicked, const UFortCollectionBookPage*, ClickedPage);

