#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SolarisUtilLibrary.generated.h"

UCLASS(Blueprintable)
class USolarisUtilLibrary : public UObject {
    GENERATED_BODY()
public:
    USolarisUtilLibrary();
    UFUNCTION(BlueprintCallable)
    static int32 MakeUnsetOptional(UObject* Property);
    
    UFUNCTION(BlueprintCallable)
    static bool MakeOptionalFromValue(UObject* Property, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static bool IsOptionalSet(UObject* Property, int32 Optional);
    
    UFUNCTION(BlueprintCallable)
    static bool IsNonNullObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static UObject* InstantiateObject(UClass* Type);
    
    UFUNCTION(BlueprintCallable)
    static bool HasTrait(UObject* Object, UClass* TraitClass);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetOptionalValue(UObject* Property, int32 Optional);
    
    UFUNCTION(BlueprintCallable)
    static UClass* GetClass(UObject* Object);
    
};

