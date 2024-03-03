#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SolarisMathLibrary_String.generated.h"

UCLASS(Blueprintable)
class USolarisMathLibrary_String : public UObject {
    GENERATED_BODY()
public:
    USolarisMathLibrary_String();
    UFUNCTION(BlueprintCallable)
    static bool not_equal(const FString& Lhs, const FString& Rhs);
    
    UFUNCTION(BlueprintCallable)
    static bool equal(const FString& Lhs, const FString& Rhs);
    
};

