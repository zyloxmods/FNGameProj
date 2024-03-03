#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomColorComponent.generated.h"

UCLASS(Blueprintable, DefaultToInstanced)
class UCustomColorComponent : public UObject {
    GENERATED_BODY()
public:
    UCustomColorComponent();
};

