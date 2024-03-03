#pragma once
#include "CoreMinimal.h"
#include "ContentRoot.h"
#include "ContentPackageRequest.generated.h"

USTRUCT(BlueprintType)
struct FContentPackageRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FContentRoot> Roots;
    
    FORTNITEGAME_API FContentPackageRequest();
};

