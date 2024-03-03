#pragma once
#include "CoreMinimal.h"
#include "FortFrontendCompositeLevel.generated.h"

class ULevelStreaming;

USTRUCT(BlueprintType)
struct FFortFrontendCompositeLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName StreamingLevelPackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> StreamingLevels;
    
    FORTNITEGAME_API FFortFrontendCompositeLevel();
};

