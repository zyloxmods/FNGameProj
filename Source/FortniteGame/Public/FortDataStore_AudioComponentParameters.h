#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortBasicAudioParamList.h"
#include "FortDataStore_AudioComponentParameters.generated.h"

UCLASS(Blueprintable)
class UFortDataStore_AudioComponentParameters : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFortBasicAudioParamList> NamedParameterGroupMap;
    
public:
    UFortDataStore_AudioComponentParameters();
};

