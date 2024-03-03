#pragma once
#include "CoreMinimal.h"
#include "ClientIdRestrictions.generated.h"

USTRUCT(BlueprintType)
struct FClientIdRestrictions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ClientId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RestrictedPlatforms;
    
    FORTNITEGAME_API FClientIdRestrictions();
};

