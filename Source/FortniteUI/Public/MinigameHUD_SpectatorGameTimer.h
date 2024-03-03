#pragma once
#include "CoreMinimal.h"
#include "MinigameWidgetBase.h"
#include "MinigameHUD_SpectatorGameTimer.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UMinigameHUD_SpectatorGameTimer : public UMinigameWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Centiseconds;
    
public:
    UMinigameHUD_SpectatorGameTimer();
};

