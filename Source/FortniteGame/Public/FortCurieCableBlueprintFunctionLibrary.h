#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FortCurieCableSocketIdentifier.h"
#include "FortCurieCableBlueprintFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class UFortCurieCableBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortCurieCableBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_FortCurieCableSocketIdentifier(FFortCurieCableSocketIdentifier A, FFortCurieCableSocketIdentifier B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_FortCurieCableSocketIdentifier(FFortCurieCableSocketIdentifier A, FFortCurieCableSocketIdentifier B);
    
};

