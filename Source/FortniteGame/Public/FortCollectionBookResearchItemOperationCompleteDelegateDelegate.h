#pragma once
#include "CoreMinimal.h"
#include "FortCollectionBookResearchItemOperationCompleteDelegateDelegate.generated.h"

class UFortAccountItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFortCollectionBookResearchItemOperationCompleteDelegate, const UFortAccountItem*, NewItem, const FString&, TemplateId);

