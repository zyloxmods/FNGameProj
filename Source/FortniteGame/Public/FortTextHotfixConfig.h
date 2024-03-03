#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "FortTextHotfixConfig.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class UFortTextHotfixConfig : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolyglotTextData> TextReplacements;
    
public:
    UFortTextHotfixConfig();
};

