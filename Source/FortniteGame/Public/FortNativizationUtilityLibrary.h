#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FortNativizationUtilityLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UFortNativizationUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortNativizationUtilityLibrary();
    UFUNCTION(BlueprintCallable)
    static bool CompareAndValidateFields(const UObject* Target, const FString& Suffix, float Tolerance, float TextSize, bool bDisplayNamingWarning);
    
};

