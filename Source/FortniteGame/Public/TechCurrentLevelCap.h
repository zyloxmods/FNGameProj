#pragma once
#include "CoreMinimal.h"
#include "TechCurrentLevelCap.generated.h"

USTRUCT(BlueprintType)
struct FTechCurrentLevelCap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CalendarEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelCap;
    
    FORTNITEGAME_API FTechCurrentLevelCap();
};

