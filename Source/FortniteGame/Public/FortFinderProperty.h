#pragma once
#include "CoreMinimal.h"
#include "FortFinderProperty.generated.h"

class UProperty;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortFinderProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UProperty* Property;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    FFortFinderProperty();
};

