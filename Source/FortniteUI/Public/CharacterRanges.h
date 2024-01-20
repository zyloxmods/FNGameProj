#pragma once
#include "CoreMinimal.h"
#include "CharacterRanges.generated.h"

USTRUCT(BlueprintType)
struct FCharacterRanges {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Ranges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SinglePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ExcludedPoints;
    
    FORTNITEUI_API FCharacterRanges();
};

