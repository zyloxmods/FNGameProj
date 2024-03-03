#pragma once
#include "CoreMinimal.h"
#include "PartyVariantRep.generated.h"

USTRUCT(BlueprintType)
struct FPartyVariantRep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString C;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString V;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 dE;
    
    FORTNITEGAME_API FPartyVariantRep();
};

