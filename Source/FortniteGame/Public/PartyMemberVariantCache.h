#pragma once
#include "CoreMinimal.h"
#include "EFortItemType.h"
#include "NestedPartyVariantRep.h"
#include "PartyMemberVariantCache.generated.h"

USTRUCT(BlueprintType)
struct FPartyMemberVariantCache {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortItemType, FNestedPartyVariantRep> vL;
    
public:
    FORTNITEGAME_API FPartyMemberVariantCache();
};

