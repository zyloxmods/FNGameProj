#pragma once
#include "CoreMinimal.h"
#include "SolarisResponse.generated.h"

USTRUCT(BlueprintType)
struct FSolarisResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGameOver;
    
    FORTNITEGAME_API FSolarisResponse();
};

