#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PropertyOverrideData.h"
#include "FortPropertyOverrideProvider.generated.h"

UINTERFACE()
class FORTNITEGAME_API UFortPropertyOverrideProvider : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API IFortPropertyOverrideProvider : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual bool GetPropertyOverrideData(const FString& PropertyScope, FPropertyOverrideData& OutPropertyOverrides) const PURE_VIRTUAL(GetPropertyOverrideData, return false;);
    
};

