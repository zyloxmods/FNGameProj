#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FortTooltipMapEntry.generated.h"

class UFortTooltip;

USTRUCT(BlueprintType)
struct FFortTooltipMapEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SecondaryObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortTooltip> TooltipClass;
    
    FORTNITEGAME_API FFortTooltipMapEntry();
};

