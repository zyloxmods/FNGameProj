#pragma once
#include "CoreMinimal.h"
#include "OverrideTablePair.generated.h"

USTRUCT(BlueprintType)
struct FOverrideTablePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParentTablePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OverrideTablePath;
    
    FORTNITEGAME_API FOverrideTablePair();
};

