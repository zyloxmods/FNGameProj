#pragma once
#include "CoreMinimal.h"
#include "SkeletalAudioBoneInstance.generated.h"

class UAudioComponent;

USTRUCT(BlueprintType)
struct FSkeletalAudioBoneInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* LoopInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delta;
    
    FORTNITEGAME_API FSkeletalAudioBoneInstance();
};

