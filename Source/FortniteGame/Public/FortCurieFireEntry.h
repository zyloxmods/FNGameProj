#pragma once
#include "CoreMinimal.h"
#include "FortCurieFireEntry.generated.h"

class ABuildingActor;

USTRUCT(BlueprintType)
struct FFortCurieFireEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABuildingActor*> AvailablePropagationNeighbors;
    
    FORTNITEGAME_API FFortCurieFireEntry();
};

