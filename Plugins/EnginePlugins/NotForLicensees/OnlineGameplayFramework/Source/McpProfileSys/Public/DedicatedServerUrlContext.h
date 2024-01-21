#pragma once
#include "CoreMinimal.h"
#include "BaseUrlContext.h"
#include "DedicatedServerUrlContext.generated.h"

USTRUCT(BlueprintType)
struct MCPPROFILESYS_API FDedicatedServerUrlContext : public FBaseUrlContext {
    GENERATED_BODY()
public:
    FDedicatedServerUrlContext();
};

