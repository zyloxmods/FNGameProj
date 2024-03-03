#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortClassSettingsBuildingPropInterface.generated.h"

class UFortWorldItemDefinition;

UINTERFACE(Blueprintable)
class UFortClassSettingsBuildingPropInterface : public UInterface {
    GENERATED_BODY()
};

class IFortClassSettingsBuildingPropInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetCreativeClassName();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UFortWorldItemDefinition*> GetCreativeClassInventory();
    
};

