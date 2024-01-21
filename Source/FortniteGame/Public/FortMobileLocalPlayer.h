#pragma once
#include "CoreMinimal.h"
#include "FortLocalPlayer.h"
#include "FortMobileLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class FORTNITEGAME_API UFortMobileLocalPlayer : public UFortLocalPlayer {
    GENERATED_BODY()
public:
    UFortMobileLocalPlayer();
};

