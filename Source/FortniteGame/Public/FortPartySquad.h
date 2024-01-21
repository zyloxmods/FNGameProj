#pragma once
#include "CoreMinimal.h"
#include "FortPartySquad.generated.h"

class UFortPartyMember;

USTRUCT(BlueprintType)
struct FFortPartySquad {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UFortPartyMember>> SquadMembers;
    
    FORTNITEGAME_API FFortPartySquad();
};

