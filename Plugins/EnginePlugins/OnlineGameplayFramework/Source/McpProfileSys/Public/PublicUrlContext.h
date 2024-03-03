#pragma once
#include "CoreMinimal.h"
#include "BaseUrlContext.h"
#include "PublicUrlContext.generated.h"

USTRUCT(BlueprintType)
struct MCPPROFILESYS_API FPublicUrlContext : public FBaseUrlContext {
    GENERATED_BODY()
public:
    FPublicUrlContext();
};

