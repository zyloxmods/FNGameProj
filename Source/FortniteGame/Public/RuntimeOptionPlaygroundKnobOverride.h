#pragma once
#include "CoreMinimal.h"
#include "RuntimeOptionPlaygroundKnobOverride.generated.h"

USTRUCT(BlueprintType)
struct FRuntimeOptionPlaygroundKnobOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString KnobID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OverrideDefault;
    
    FORTNITEGAME_API FRuntimeOptionPlaygroundKnobOverride();
};

