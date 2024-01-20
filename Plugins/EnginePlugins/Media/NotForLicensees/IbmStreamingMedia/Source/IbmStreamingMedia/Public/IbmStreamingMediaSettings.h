#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IbmStreamingMediaSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=IbmStreamingMedia)
class UIbmStreamingMediaSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLegacyMediaSource;
    
    UIbmStreamingMediaSettings();
};

