#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SolarisMathLibrary_Object.generated.h"

UCLASS(Blueprintable)
class USolarisMathLibrary_Object : public UObject {
    GENERATED_BODY()
public:
    USolarisMathLibrary_Object();
    UFUNCTION(BlueprintCallable)
    static bool not_equal(UObject* Lhs, UObject* Rhs);
    
    UFUNCTION(BlueprintCallable)
    static bool equal(UObject* Lhs, UObject* Rhs);
    
};

