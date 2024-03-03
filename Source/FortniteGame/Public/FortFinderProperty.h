#pragma once
#include "CoreMinimal.h"
#include "FortFinderProperty.generated.h"

USTRUCT(BlueprintType)
struct FFortFinderProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TFieldPath<FProperty> Property;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    FORTNITEGAME_API FFortFinderProperty();
};

