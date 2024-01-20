#pragma once
#include "CoreMinimal.h"
#include "FortSlateHUDIndicator.h"
#include "FortSpottedActorIndicator.generated.h"

class AFortPlayerController;

UCLASS(Blueprintable)
class UFortSpottedActorIndicator : public UFortSlateHUDIndicator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* OwnerPC;
    
public:
    UFortSpottedActorIndicator();
};

