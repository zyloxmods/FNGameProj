#pragma once
#include "CoreMinimal.h"
#include "PotentialSpectatorTarget.generated.h"

class AFortPlayerStateAthena;

USTRUCT(BlueprintType)
struct FPotentialSpectatorTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerStateAthena> PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCurrentViewTarget;
    
    FORTNITEUI_API FPotentialSpectatorTarget();
};

