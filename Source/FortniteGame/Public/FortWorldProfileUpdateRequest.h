#pragma once
#include "CoreMinimal.h"
#include "FortWorldProfileUpdateRequest.generated.h"

class UFortMcpProfileWorld;

USTRUCT(BlueprintType)
struct FFortWorldProfileUpdateRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortMcpProfileWorld*> WorldProfilesToSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfRequests;
    
    FORTNITEGAME_API FFortWorldProfileUpdateRequest();
};

