#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CrashlyticsBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class UCrashlyticsBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCrashlyticsBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetUserName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static void SetUserIdentifier(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    static void SetUserEmail(const FString& Email);
    
    UFUNCTION(BlueprintCallable)
    static void SetStringKey(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetIntegerKey(const FString& Key, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFloatKey(const FString& Key, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBooleanKey(const FString& Key, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void LogMessage(const FString& MESSAGE);
    
    UFUNCTION(BlueprintCallable)
    static void LogException(const FString& MESSAGE);
    
};

