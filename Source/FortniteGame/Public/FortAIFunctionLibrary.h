#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FortAIFunctionLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAIFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortAIFunctionLibrary();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void MakeNoiseEventAtLocation(AActor* NoiseMaker, float MaxRange, const FVector& NoiseLocation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void MakeNoiseEvent(AActor* NoiseMaker, float MaxRange);
    
};

