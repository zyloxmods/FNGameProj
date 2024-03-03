#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FortUIBaseClass.generated.h"

UCLASS(Blueprintable, NonTransient)
class FORTNITEGAME_API AFortUIBaseClass : public AHUD {
    GENERATED_BODY()
public:
    AFortUIBaseClass();
};

