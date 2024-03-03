#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SolarisMathLibrary_Float.generated.h"

UCLASS(Blueprintable)
class USolarisMathLibrary_Float : public UObject {
    GENERATED_BODY()
public:
    USolarisMathLibrary_Float();
    UFUNCTION(BlueprintCallable)
    static float subtract_equals(float& Lhs, float Rhs);
    
    UFUNCTION(BlueprintCallable)
    static float Subtract(float Lhs, float Rhs);
    
    UFUNCTION(BlueprintCallable)
    static bool not_equal(float Lhs, float Rhs);
    
    UFUNCTION(BlueprintCallable)
    static float negate(float Value);
    
    UFUNCTION(BlueprintCallable)
    static float multiply_equals(float& Lhs, float Rhs);
    
    UFUNCTION(BlueprintCallable)
    static float Multiply(float Lhs, float Rhs);
    
    UFUNCTION(BlueprintCallable)
    static float min(float Lhs, float Rhs);
    
    UFUNCTION(BlueprintCallable)
    static float max(float Lhs, float Rhs);
    
    UFUNCTION(BlueprintCallable)
    static bool less_equal(float Lhs, float Rhs);
    
    UFUNCTION(BlueprintCallable)
    static bool less(float Lhs, float Rhs);
    
    UFUNCTION(BlueprintCallable)
    static bool greater_equal(float Lhs, float Rhs);
    
    UFUNCTION(BlueprintCallable)
    static bool greater(float Lhs, float Rhs);
    
    UFUNCTION(BlueprintCallable)
    static bool equal(float Lhs, float Rhs);
    
    UFUNCTION(BlueprintCallable)
    static float divide_equals(float& Lhs, float Rhs);
    
    UFUNCTION(BlueprintCallable)
    static float Divide(float Lhs, float Rhs);
    
    UFUNCTION(BlueprintCallable)
    static float assign(float& Lhs, float Rhs);
    
    UFUNCTION(BlueprintCallable)
    static float add_equals(float& Lhs, float Rhs);
    
    UFUNCTION(BlueprintCallable)
    static float Add(float Lhs, float Rhs);
    
    UFUNCTION(BlueprintCallable)
    static float abs(float Value);
    
};

