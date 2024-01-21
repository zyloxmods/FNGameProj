#pragma once
#include "CoreMinimal.h"
#include "BaseUrlContext.h"
#include "ClientUrlContext.generated.h"

USTRUCT(BlueprintType)
struct MCPPROFILESYS_API FClientUrlContext : public FBaseUrlContext {
    GENERATED_BODY()
public:
    FClientUrlContext();
};

