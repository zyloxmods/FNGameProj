#pragma once
#include "CoreMinimal.h"
#include "TaggedSoundSubstitution.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FTaggedSoundSubstitution {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Substitute;
    
    FORTNITEGAME_API FTaggedSoundSubstitution();
};

