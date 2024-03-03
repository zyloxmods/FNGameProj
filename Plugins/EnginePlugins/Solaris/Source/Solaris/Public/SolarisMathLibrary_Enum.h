#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SolarisMathLibrary_Enum.generated.h"

UCLASS(Blueprintable)
class USolarisMathLibrary_Enum : public UObject {
    GENERATED_BODY()
public:
    USolarisMathLibrary_Enum();
    UFUNCTION(BlueprintCallable)
    static bool not_equal(uint8 Lhs, uint8 Rhs);
    
    UFUNCTION(BlueprintCallable)
    static bool equal(uint8 Lhs, uint8 Rhs);
    
};

