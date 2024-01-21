#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PlatformPrefixIconList.h"
#include "FortSocialDisplayData.generated.h"

class UFortVoiceChannelSpeakerWidget;
class UFortVoiceSpeakerContainerWidget;

UCLASS(Blueprintable)
class UFortSocialDisplayData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortVoiceSpeakerContainerWidget> LoadingActiveChannelSpeakContainerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortVoiceChannelSpeakerWidget> LoadingOverrideSpeakerClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FPlatformPrefixIconList> PlatformPrefixIconMap;
    
public:
    UFortSocialDisplayData();
};

