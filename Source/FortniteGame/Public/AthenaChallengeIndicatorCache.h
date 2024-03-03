#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AthenaChallengeIndicatorCache.generated.h"

class AFortPlayerController;

UCLASS(Blueprintable)
class FORTNITEGAME_API UAthenaChallengeIndicatorCache : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* OwningPlayerController;
    
public:
    UAthenaChallengeIndicatorCache();
private:
    UFUNCTION(BlueprintCallable)
    void HandleQuestsUpdated();
    
};

