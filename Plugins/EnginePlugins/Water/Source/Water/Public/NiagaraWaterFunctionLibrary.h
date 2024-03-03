#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NiagaraWaterFunctionLibrary.generated.h"

class AWaterBody;
class UNiagaraComponent;

UCLASS(Blueprintable)
class WATER_API UNiagaraWaterFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNiagaraWaterFunctionLibrary();
private:
    UFUNCTION(BlueprintCallable)
    static void SetWaterBody(UNiagaraComponent* NiagaraSystem, const FString& OverrideName, AWaterBody* WaterBody);
    
};

