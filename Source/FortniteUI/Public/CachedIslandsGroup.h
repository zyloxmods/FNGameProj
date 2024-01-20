#pragma once
#include "CoreMinimal.h"
#include "CachedIslandsGroup.generated.h"

class UFortCreativeIslandLink;

USTRUCT(BlueprintType)
struct FCachedIslandsGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortCreativeIslandLink*> IslandLinks;
    
    FORTNITEUI_API FCachedIslandsGroup();
};

