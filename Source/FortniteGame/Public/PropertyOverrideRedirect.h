#pragma once
#include "CoreMinimal.h"
#include "PropertyOverrideRedirect.generated.h"

USTRUCT(BlueprintType)
struct FPropertyOverrideRedirect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OldPropertyScope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OldPropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewPropertyScope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewPropertyName;
    
    FORTNITEGAME_API FPropertyOverrideRedirect();
};

