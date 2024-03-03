#pragma once
#include "CoreMinimal.h"
#include "FortCharacterRanges.generated.h"

USTRUCT(BlueprintType)
struct FFortCharacterRanges {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> Ranges;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> SinglePoints;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> ExcludedPoints;
    
    FORTNITEGAME_API FFortCharacterRanges();
};

