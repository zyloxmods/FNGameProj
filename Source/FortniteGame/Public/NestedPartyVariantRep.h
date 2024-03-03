#pragma once
#include "CoreMinimal.h"
#include "PartyVariantRep.h"
#include "NestedPartyVariantRep.generated.h"

USTRUCT(BlueprintType)
struct FNestedPartyVariantRep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPartyVariantRep> I;
    
    FORTNITEGAME_API FNestedPartyVariantRep();
};

