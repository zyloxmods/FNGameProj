#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "SmartObjectBlueprintFunctionLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class SMARTOBJECTSMODULE_API USmartObjectBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USmartObjectBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static bool K2_UseSmartObject(AActor* Avatar, AActor* SmartObject);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_SetSmartObjectEnabled(AActor* SmartObject, const bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_RemoveLooseGameplayTags(AActor* Actor, const FGameplayTagContainer& GameplayTags);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_AddLooseGameplayTags(AActor* Actor, const FGameplayTagContainer& GameplayTags);
    
};

