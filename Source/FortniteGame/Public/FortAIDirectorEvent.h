#pragma once
#include "CoreMinimal.h"
#include "EFortAIDirectorEvent.h"
#include "FortAIDirectorEvent.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FFortAIDirectorEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAIDirectorEvent Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* EventSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* EventTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EventValue;
    
    FORTNITEGAME_API FFortAIDirectorEvent();
};

