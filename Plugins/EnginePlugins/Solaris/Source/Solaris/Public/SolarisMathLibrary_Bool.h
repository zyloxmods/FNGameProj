#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SolarisMathLibrary_Bool.generated.h"

UCLASS(Blueprintable)
class USolarisMathLibrary_Bool : public UObject {
    GENERATED_BODY()
public:
    USolarisMathLibrary_Bool();
    UFUNCTION(BlueprintCallable)
    static bool logical_xor(bool Lhs, bool Rhs);
    
    UFUNCTION(BlueprintCallable)
    static bool equal(bool Lhs, bool Rhs);
    
};

