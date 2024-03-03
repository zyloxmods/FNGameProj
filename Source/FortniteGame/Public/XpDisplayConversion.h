#pragma once
#include "CoreMinimal.h"
#include "XpDisplayConversion.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FXpDisplayConversion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortItemDefinition> XpItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValueToReplaceAt;
    
    FORTNITEGAME_API FXpDisplayConversion();
};

