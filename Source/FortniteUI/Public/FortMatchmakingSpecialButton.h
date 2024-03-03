#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortMatchmakingSpecialButton.generated.h"

class UFortMatchmakingGameModeButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMatchmakingSpecialButton : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMatchmakingGameModeButton* Button_LimitedTimeGameMode;
    
public:
    UFortMatchmakingSpecialButton();
};

