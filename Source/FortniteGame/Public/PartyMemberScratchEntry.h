#pragma once
#include "CoreMinimal.h"
#include "PartyMemberScratchEntry.generated.h"

USTRUCT(BlueprintType)
struct FPartyMemberScratchEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 T;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 V;
    
    FORTNITEGAME_API FPartyMemberScratchEntry();
};

