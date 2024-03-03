#pragma once
#include "CoreMinimal.h"
#include "CommonInputControllerData.h"
#include "FortInputControllerData.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortInputControllerData : public UCommonInputControllerData {
    GENERATED_BODY()
public:
    UFortInputControllerData();
};

