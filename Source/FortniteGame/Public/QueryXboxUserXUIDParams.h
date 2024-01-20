#pragma once
#include "CoreMinimal.h"
#include "QueryXboxUserXUIDParams.generated.h"

USTRUCT(BlueprintType)
struct FQueryXboxUserXUIDParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserXSTSToken;
    
    FORTNITEGAME_API FQueryXboxUserXUIDParams();
};

