#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FortItemAndVariantSwapHelpers.generated.h"

class AFortPlayerPawn;
class UAthenaCosmeticItemDefinition;

UCLASS(Blueprintable)
class UFortItemAndVariantSwapHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortItemAndVariantSwapHelpers();
    UFUNCTION(BlueprintCallable)
    static void PushCosmeticOverrideOntoPawn(AFortPlayerPawn* Pawn, UAthenaCosmeticItemDefinition* Cosmetic);
    
};

