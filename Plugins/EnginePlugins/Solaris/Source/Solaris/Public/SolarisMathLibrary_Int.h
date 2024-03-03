#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SolarisMathLibrary_Int.generated.h"

UCLASS(Blueprintable)
class USolarisMathLibrary_Int : public UObject {
    GENERATED_BODY()
public:
    USolarisMathLibrary_Int();
    UFUNCTION(BlueprintCallable)
    static int32 subtract_equals(int32& Lhs, int32 Rhs);
    
    UFUNCTION(BlueprintCallable)
    static int32 Subtract(int32 Lhs, int32 Rhs);
    
    UFUNCTION(BlueprintCallable)
    static bool not_equal(int32 Lhs, int32 Rhs);
    
    UFUNCTION(BlueprintCallable)
    static int32 negate(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static int32 multiply_equals(int32& Lhs, int32 Rhs);
    
    UFUNCTION(BlueprintCallable)
    static int32 Multiply(int32 Lhs, int32 Rhs);
    
    UFUNCTION(BlueprintCallable)
    static int32 min(int32 Lhs, int32 Rhs);
    
    UFUNCTION(BlueprintCallable)
    static int32 max(int32 Lhs, int32 Rhs);
    
    UFUNCTION(BlueprintCallable)
    static bool less_equal(int32 Lhs, int32 Rhs);
    
    UFUNCTION(BlueprintCallable)
    static bool less(int32 Lhs, int32 Rhs);
    
    UFUNCTION(BlueprintCallable)
    static bool greater_equal(int32 Lhs, int32 Rhs);
    
    UFUNCTION(BlueprintCallable)
    static bool greater(int32 Lhs, int32 Rhs);
    
    UFUNCTION(BlueprintCallable)
    static bool equal(int32 Lhs, int32 Rhs);
    
    UFUNCTION(BlueprintCallable)
    static int32 divide_equals(int32& Lhs, int32 Rhs);
    
    UFUNCTION(BlueprintCallable)
    static int32 Divide(int32 Lhs, int32 Rhs);
    
    UFUNCTION(BlueprintCallable)
    static int32 add_equals(int32& Lhs, int32 Rhs);
    
    UFUNCTION(BlueprintCallable)
    static int32 Add(int32 Lhs, int32 Rhs);
    
    UFUNCTION(BlueprintCallable)
    static int32 abs(int32 Value);
    
};

