#pragma once
#include "CoreMinimal.h"
#include "BaseVariantDef.h"
#include "GameplayTagVariantDef.generated.h"

USTRUCT(BlueprintType)
struct FGameplayTagVariantDef : public FBaseVariantDef {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FGameplayTagVariantDef();
};

