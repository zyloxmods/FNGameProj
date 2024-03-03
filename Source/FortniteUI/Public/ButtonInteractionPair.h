#pragma once
#include "CoreMinimal.h"
#include "ButtonInteractionPair.generated.h"

class AActor;
class UFortTouchInteractionButton;

USTRUCT(BlueprintType)
struct FButtonInteractionPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TrackedInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortTouchInteractionButton* TrackedButton;
    
    FORTNITEUI_API FButtonInteractionPair();
};

