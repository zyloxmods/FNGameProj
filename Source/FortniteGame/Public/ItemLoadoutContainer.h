#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "HotfixableInventoryOverrideItem.h"
#include "ItemAndCount.h"
#include "ItemLoadoutContainer.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FItemLoadoutContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemAndCount> Loadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHotfixableInventoryOverrideItem> LoadoutList;
    
    FItemLoadoutContainer();
};

