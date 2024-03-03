#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordRuntimeSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig)
class UDiscordRuntimeSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableJoinSecrets;
    
    UDiscordRuntimeSettings();
};

