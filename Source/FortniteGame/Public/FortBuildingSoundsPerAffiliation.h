#pragma once
#include "CoreMinimal.h"
#include "FortBuildingSoundsPerAffiliation.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FFortBuildingSoundsPerAffiliation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundFriendly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundEnemy;
    
    FORTNITEGAME_API FFortBuildingSoundsPerAffiliation();
};

