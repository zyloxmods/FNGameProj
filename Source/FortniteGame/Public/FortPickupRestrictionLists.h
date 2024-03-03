#pragma once
#include "CoreMinimal.h"
#include "FortPickupTagTestContainer.h"
#include "FortPickupRestrictionLists.generated.h"

USTRUCT(BlueprintType)
struct FFortPickupRestrictionLists {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPickupTagTestContainer WhiteList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPickupTagTestContainer Blacklist;
    
    FORTNITEGAME_API FFortPickupRestrictionLists();
};

