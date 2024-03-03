#pragma once
#include "CoreMinimal.h"
#include "ProfileStatRequirement.generated.h"

USTRUCT(BlueprintType)
struct FProfileStatRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProfileStat;
    
    FORTNITEGAME_API FProfileStatRequirement();
};

