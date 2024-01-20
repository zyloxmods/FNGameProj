#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortGameplayTagVolumeInterface.generated.h"

UINTERFACE()
class FORTNITEGAME_API UFortGameplayTagVolumeInterface : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API IFortGameplayTagVolumeInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void ApplyTags() PURE_VIRTUAL(ApplyTags,);
    
};

