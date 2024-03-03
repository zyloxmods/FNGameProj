#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "DonutIdleGameScreen.generated.h"

class UDonutChallengeIdleGame;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UDonutIdleGameScreen : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_Intro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDonutChallengeIdleGame* Widget_GameLayer;
    
public:
    UDonutIdleGameScreen();
};

