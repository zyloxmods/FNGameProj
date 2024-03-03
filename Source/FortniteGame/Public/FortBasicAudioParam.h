#pragma once
#include "CoreMinimal.h"
#include "FortBasicAudioParam.generated.h"

USTRUCT(BlueprintType)
struct FFortBasicAudioParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FORTNITEGAME_API FFortBasicAudioParam();
};

