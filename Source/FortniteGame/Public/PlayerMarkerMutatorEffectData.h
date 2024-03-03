#pragma once
#include "CoreMinimal.h"
#include "PlayerMarkerMutatorEffectData.generated.h"

class AFortPlayerStateAthena;

USTRUCT(BlueprintType)
struct FPlayerMarkerMutatorEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* MarkedPlayerState;
    
    FORTNITEGAME_API FPlayerMarkerMutatorEffectData();
};

