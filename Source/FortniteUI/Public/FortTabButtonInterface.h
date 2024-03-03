#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortTabButtonLabelInfo.h"
#include "FortTabButtonInterface.generated.h"

UINTERFACE(Blueprintable)
class UFortTabButtonInterface : public UInterface {
    GENERATED_BODY()
};

class IFortTabButtonInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTabLabelInfo(const FFortTabButtonLabelInfo& TabLabelInfo);
    
};

