#pragma once
#include "CoreMinimal.h"
#include "FortGlobalActionDetails.generated.h"

USTRUCT(BlueprintType)
struct FFortGlobalActionDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HoldStatus;
    
    FORTNITEGAME_API FFortGlobalActionDetails();
};

