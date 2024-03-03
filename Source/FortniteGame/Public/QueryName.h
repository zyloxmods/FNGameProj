#pragma once
#include "CoreMinimal.h"
#include "QueryName.generated.h"

USTRUCT(BlueprintType)
struct FQueryName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QueryName;
    
    FORTNITEGAME_API FQueryName();
};

