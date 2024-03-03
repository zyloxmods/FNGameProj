#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AthenaTravelLogEntry.h"
#include "AthenaTravelLogFormatting.generated.h"

class UObject;

UCLASS(Blueprintable)
class UAthenaTravelLogFormatting : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAthenaTravelLogFormatting();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldDisplayText(const FAthenaTravelLogEntry& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTravelLogTextDisplayEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText FormatTravelLogEntry(UObject* WorldContextObject, const FAthenaTravelLogEntry& Entry);
    
};

