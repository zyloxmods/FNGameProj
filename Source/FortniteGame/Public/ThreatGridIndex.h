#pragma once
#include "CoreMinimal.h"
#include "ThreatGridIndex.generated.h"

USTRUCT(BlueprintType)
struct FThreatGridIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Y;
    
    FORTNITEGAME_API FThreatGridIndex();
};

