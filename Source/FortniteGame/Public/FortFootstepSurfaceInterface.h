#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortFootstepSurfaceInterface.generated.h"

class UFortFootstepSurfaceData;

UINTERFACE(Blueprintable, MinimalAPI)
class UFortFootstepSurfaceInterface : public UInterface {
    GENERATED_BODY()
};

class IFortFootstepSurfaceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UFortFootstepSurfaceData* GetFootstepSurfaceData() const;
    
};

