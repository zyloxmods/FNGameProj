#pragma once
#include "CoreMinimal.h"
#include "OpenedCardPack.generated.h"

class UFortCardPackItemDefinition;

USTRUCT(BlueprintType)
struct FOpenedCardPack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCardPackItemDefinition* CardPackDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayLevel;
    
    FORTNITEUI_API FOpenedCardPack();
};

