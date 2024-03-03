#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortStandaloneStoreState.generated.h"

USTRUCT(BlueprintType)
struct FFortStandaloneStoreState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime StoreEnd;
    
    FORTNITEGAME_API FFortStandaloneStoreState();
};

