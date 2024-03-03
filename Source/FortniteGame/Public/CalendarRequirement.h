#pragma once
#include "CoreMinimal.h"
#include "CalendarRequirement.generated.h"

USTRUCT(BlueprintType)
struct FCalendarRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CalendarEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DaysFromEeventStart;
    
    FORTNITEGAME_API FCalendarRequirement();
};

