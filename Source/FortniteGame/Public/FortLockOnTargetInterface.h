#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "FortLockOnTargetInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UFortLockOnTargetInterface : public UInterface {
    GENERATED_BODY()
};

class IFortLockOnTargetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetLockOnTargetLocation() const;
    
};

