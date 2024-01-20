#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortHUDObjectiveSizeInterface.generated.h"

UINTERFACE(Blueprintable)
class UFortHUDObjectiveSizeInterface : public UInterface {
    GENERATED_BODY()
};

class IFortHUDObjectiveSizeInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetHeightEstimate() const;
    
};

