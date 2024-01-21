#pragma once
#include "CoreMinimal.h"
#include "ItemAndCount.h"
#include "ItemLoadoutContainer.generated.h"

USTRUCT(BlueprintType)
struct FItemLoadoutContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemAndCount> Loadout;
    
    FORTNITEGAME_API FItemLoadoutContainer();
};

