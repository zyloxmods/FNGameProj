#pragma once
#include "CoreMinimal.h"
#include "ProfileGoCollection.generated.h"

USTRUCT(BlueprintType)
struct FProfileGoCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Scenarios;
    
    FORTNITEGAME_API FProfileGoCollection();
};

