#pragma once
#include "CoreMinimal.h"
#include "FortUINavigationOperation.h"
#include "FortUINavigationRequest.generated.h"

USTRUCT(BlueprintType)
struct FFortUINavigationRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortUINavigationOperation> Operations;
    
    FORTNITEUI_API FFortUINavigationRequest();
};

