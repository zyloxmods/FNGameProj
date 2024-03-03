#pragma once
#include "CoreMinimal.h"
#include "FortBasicAudioParam.h"
#include "FortBasicAudioParamList.generated.h"

USTRUCT(BlueprintType)
struct FFortBasicAudioParamList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortBasicAudioParam> Params;
    
    FORTNITEGAME_API FFortBasicAudioParamList();
};

