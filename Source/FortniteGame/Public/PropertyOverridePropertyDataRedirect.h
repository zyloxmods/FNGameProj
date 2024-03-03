#pragma once
#include "CoreMinimal.h"
#include "PropertyOverridePropertyDataRedirect.generated.h"

USTRUCT(BlueprintType)
struct FPropertyOverridePropertyDataRedirect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PropertyKnobName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OldPropertyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewPropertyData;
    
    FORTNITEGAME_API FPropertyOverridePropertyDataRedirect();
};

