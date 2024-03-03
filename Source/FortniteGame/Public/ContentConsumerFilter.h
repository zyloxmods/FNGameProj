#pragma once
#include "CoreMinimal.h"
#include "ContentConsumerFilter.generated.h"

USTRUCT(BlueprintType)
struct FContentConsumerFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Platform;
    
    FORTNITEGAME_API FContentConsumerFilter();
};

