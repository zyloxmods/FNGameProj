#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "KairosGameModeBase.generated.h"

class UKairosConfig;

UCLASS(Blueprintable, NonTransient)
class KAIROSSCENECAPTURE_API AKairosGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKairosConfig* DefaultConfig;
    
public:
    AKairosGameModeBase();
    UFUNCTION(BlueprintCallable)
    UKairosConfig* GetDefaultConfig();
    
};

