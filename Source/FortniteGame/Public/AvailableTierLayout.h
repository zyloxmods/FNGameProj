#pragma once
#include "CoreMinimal.h"
#include "FortTierCollectionLayoutOutput.h"
#include "AvailableTierLayout.generated.h"

class UFortTieredCollectionLayout;

USTRUCT(BlueprintType)
struct FAvailableTierLayout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortTieredCollectionLayout* Layout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTierCollectionLayoutOutput> AvailableTiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTierCollectionLayoutOutput> LockedTiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLocked: 1;
    
    FORTNITEGAME_API FAvailableTierLayout();
};

