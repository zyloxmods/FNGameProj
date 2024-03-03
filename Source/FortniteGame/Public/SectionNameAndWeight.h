#pragma once
#include "CoreMinimal.h"
#include "SectionNameAndWeight.generated.h"

USTRUCT(BlueprintType)
struct FSectionNameAndWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SectionWeight;
    
    FORTNITEGAME_API FSectionNameAndWeight();
};

