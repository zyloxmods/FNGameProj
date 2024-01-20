#pragma once
#include "CoreMinimal.h"
#include "Subsystems/Subsystem.h"
#include "BlueprintContextBase.generated.h"

UCLASS(Abstract, Blueprintable, Transient, Within=LocalPlayer)
class BLUEPRINTCONTEXT_API UBlueprintContextBase : public USubsystem {
    GENERATED_BODY()
public:
    UBlueprintContextBase();
};

