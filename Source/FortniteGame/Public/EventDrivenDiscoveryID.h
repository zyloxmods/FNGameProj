#pragma once
#include "CoreMinimal.h"
#include "EventDrivenDiscoveryID.generated.h"

USTRUCT(BlueprintType)
struct FEventDrivenDiscoveryID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CalendarEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireEventActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveBitId;
    
    FORTNITEGAME_API FEventDrivenDiscoveryID();
};

