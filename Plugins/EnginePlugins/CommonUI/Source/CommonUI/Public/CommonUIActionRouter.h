#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "CommonUIActionRouter.generated.h"

UCLASS(Blueprintable)
class COMMONUI_API UCommonUIActionRouter : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UCommonUIActionRouter();
};

