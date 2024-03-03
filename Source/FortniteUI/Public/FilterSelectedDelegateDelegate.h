#pragma once
#include "CoreMinimal.h"
#include "FilterSelectedDelegateDelegate.generated.h"

class UContentBrowserFilterEntry;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFilterSelectedDelegate, bool, bIsSelected, UContentBrowserFilterEntry*, Entry);

