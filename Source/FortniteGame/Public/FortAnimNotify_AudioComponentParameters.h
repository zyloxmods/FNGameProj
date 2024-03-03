#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EFortNotifyAudioParamsStoreSource.h"
#include "FortBasicAudioParam.h"
#include "FortAnimNotify_AudioComponentParameters.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UFortAnimNotify_AudioComponentParameters : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortNotifyAudioParamsStoreSource Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DataStoreName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortBasicAudioParam> AudioParams;
    
public:
    UFortAnimNotify_AudioComponentParameters();
};

