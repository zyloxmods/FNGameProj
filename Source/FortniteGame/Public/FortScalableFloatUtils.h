#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AttributeSet.h"
#include "FortScalableFloatUtils.generated.h"

class UCurveTable;

UCLASS(Blueprintable)
class UFortScalableFloatUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortScalableFloatUtils();
    UFUNCTION(BlueprintCallable)
    static FString ToSimpleString(const FScalableFloat& Input);
    
    UFUNCTION(BlueprintCallable)
    static void SetValue(UPARAM(Ref) FScalableFloat& Input, float NewValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetScalingValue(UPARAM(Ref) FScalableFloat& Input, float InCoeffecient, const FName InRowName, UCurveTable* InTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStatic(const FScalableFloat& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetValueAtLevel(const FScalableFloat& Input, float Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetValue(const FScalableFloat& Input);
    
};

