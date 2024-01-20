#pragma once
#include "CoreMinimal.h"
#include "FortGameHotfixUpdateResponse.generated.h"

USTRUCT(BlueprintType)
struct FFortGameHotfixUpdateResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Status;
    
    FORTNITEGAME_API FFortGameHotfixUpdateResponse();
};

