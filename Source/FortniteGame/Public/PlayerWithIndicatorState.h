#pragma once
#include "CoreMinimal.h"
#include "EPlayerIndicatorFlags.h"
#include "PlayerWithIndicatorState.generated.h"

class AFortPlayerStateAthena;

USTRUCT(BlueprintType)
struct FPlayerWithIndicatorState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerStateAthena> PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerIndicatorFlags IndicatorState;
    
    FORTNITEGAME_API FPlayerWithIndicatorState();
};

