#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EInteractionBeingAttempted.h"
#include "TInteractionType.h"
#include "InteractionType.generated.h"

class AFortPlayerController;
class AFortPlayerPawn;
class UObject;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FInteractionType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TInteractionType InteractionType;
    
  UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerPawn> RequestingPawn;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerController> RequestingPlayerController;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> InteractComponent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> OptionalObjectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InteractPoint;
    
    FORTNITEGAME_API FInteractionType();
};

