#pragma once
#include "CoreMinimal.h"
#include "ContentRoot.generated.h"

USTRUCT(BlueprintType)
struct FContentRoot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ContentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    FORTNITEGAME_API FContentRoot();
};

