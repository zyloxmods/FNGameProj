#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomPlayerComponent.generated.h"

UCLASS(Blueprintable, DefaultToInstanced)
class UCustomPlayerComponent : public UObject {
    GENERATED_BODY()
public:
    UCustomPlayerComponent();
};

