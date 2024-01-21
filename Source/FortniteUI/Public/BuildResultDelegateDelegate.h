#pragma once
#include "CoreMinimal.h"
#include "BuildResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBuildResultDelegate, bool, Result, const FString&, BuildingTemplateId);

