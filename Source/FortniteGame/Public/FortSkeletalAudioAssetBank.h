#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SkeletalAudioBoneConfig.h"
#include "FortSkeletalAudioAssetBank.generated.h"

UCLASS(Blueprintable)
class UFortSkeletalAudioAssetBank : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkeletalAudioBoneConfig> BoneConfigs;
    
    UFortSkeletalAudioAssetBank();
};

