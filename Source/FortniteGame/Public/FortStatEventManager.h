#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortStatEvent.h"
#include "FortStatEventSequence.h"
#include "FortStatEventManager.generated.h"

class AFortPlayerController;

UCLASS(Blueprintable)
class UFortStatEventManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* FPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortStatEvent> StatEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortStatEventSequence> StatEventSequences;
    
    UFortStatEventManager();
};

