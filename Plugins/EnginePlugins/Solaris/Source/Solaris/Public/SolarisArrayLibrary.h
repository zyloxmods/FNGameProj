#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SolarisArrayLibrary.generated.h"

UCLASS(Blueprintable)
class USolarisArrayLibrary : public UObject {
    GENERATED_BODY()
public:
    USolarisArrayLibrary();
    UFUNCTION(BlueprintCallable)
    static int32 Num(const TArray<int32>& Array);
    
    UFUNCTION(BlueprintCallable)
    static void Move(const TArray<int32>& Target, const TArray<int32>& Source);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidIndex(const TArray<int32>& Array, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void Empty(const TArray<int32>& Array);
    
    UFUNCTION(BlueprintCallable)
    static bool Contains(const TArray<int32>& Array, const int32& search_item);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> Concat(const TArray<int32>& Lhs, const TArray<int32>& Rhs);
    
    UFUNCTION(BlueprintCallable)
    static int32 Add(const TArray<int32>& Array, const int32& new_item);
    
};

