#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EFortItemType.h"
#include "FortItemTypeFunctionLibrary.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortItemTypeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortItemTypeFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ToText(EFortItemType ItemType, bool UsePlural);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EFortItemType GetTemplateType(EFortItemType ItemType);
    
};

