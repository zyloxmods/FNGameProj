#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FortMobileKismetLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMobileKismetLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortMobileKismetLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetTapToFireEnabled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetDedicatedButtonEnabled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetAutoFireEnabled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool Get3DTouchEnabled(UObject* WorldContextObject);
    
};

