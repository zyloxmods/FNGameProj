#pragma once
#include "CoreMinimal.h"
#include "XPUIEvent.generated.h"

class UFortAccoladeItemDefinition;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FXPUIEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAccoladeItemDefinition* AccoladeDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SimulatedXpEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OldXPValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventXpValue;
    
    FXPUIEvent();
};

