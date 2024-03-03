#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "FortCreativeBudgetLibrary.generated.h"

class AActor;
class APlayerController;

UCLASS(Blueprintable)
class UFortCreativeBudgetLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortCreativeBudgetLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanPlaceInstanceOfClass(APlayerController* Controller, TSubclassOf<AActor> Class, const FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanPlaceClassInstances(APlayerController* Controller, const TArray<TSubclassOf<AActor>> Classes, const FVector& Location);
    
};

