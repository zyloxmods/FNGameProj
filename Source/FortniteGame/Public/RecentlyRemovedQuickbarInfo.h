#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RecentlyRemovedQuickbarInfo.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FRecentlyRemovedQuickbarInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ItemGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemovedFromSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* ItemDefinition;
    
    FORTNITEGAME_API FRecentlyRemovedQuickbarInfo();
};

