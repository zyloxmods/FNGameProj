#pragma once
#include "CoreMinimal.h"
#include "OnRetrieveVideoUrlResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRetrieveVideoUrlResult, const FString&, RetrievedUrl);

