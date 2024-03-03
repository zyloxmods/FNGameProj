#pragma once
#include "CoreMinimal.h"
#include "HomebaseSquadSlotId.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FHomebaseSquadSlotId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadSlotIndex;
    
    FHomebaseSquadSlotId();
};

