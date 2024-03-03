#pragma once
#include "CoreMinimal.h"
#include "PlayerBindTracking.generated.h"

class AFortPlayerController;

USTRUCT(BlueprintType)
struct FPlayerBindTracking {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerController> PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bQuestReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bQuestManagerUpdateBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCheckCompleted;
    
    FORTNITEGAME_API FPlayerBindTracking();
};

