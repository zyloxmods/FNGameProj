#pragma once
#include "CoreMinimal.h"
#include "CanInteractResult.generated.h"

class AFortPlayerController;
class AFortPlayerPawn;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FCanInteractResult {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerPawn> RequestingPawn;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerController> RequestingPlayerController;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> InteractComponent;
    
    FORTNITEGAME_API FCanInteractResult();
};

