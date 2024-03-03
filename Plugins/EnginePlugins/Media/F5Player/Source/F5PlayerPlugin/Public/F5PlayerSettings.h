#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "F5PlayerSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=F5Player)
class UF5PlayerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLegacyMediaSource;
    
    UF5PlayerSettings();
};

