#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "BlueprintContextLibrary.generated.h"

class UObject;
class USubsystem;

UCLASS(Blueprintable)
class BLUEPRINTCONTEXT_API UBlueprintContextLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlueprintContextLibrary();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    static USubsystem* GetContext(UObject* ContextObject, TSubclassOf<USubsystem> Class);
    
};

