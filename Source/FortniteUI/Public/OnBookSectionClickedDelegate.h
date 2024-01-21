#pragma once
#include "CoreMinimal.h"
#include "OnBookSectionClickedDelegate.generated.h"

class UFortCollectionBookSection;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBookSectionClicked, const UFortCollectionBookSection*, ClickedSection);

