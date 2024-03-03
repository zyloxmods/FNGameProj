#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortMatchmakingGameModeButton.generated.h"

class UCommonButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMatchmakingGameModeButton : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* IconTextButton_Play;
    
public:
    UFortMatchmakingGameModeButton();
};

