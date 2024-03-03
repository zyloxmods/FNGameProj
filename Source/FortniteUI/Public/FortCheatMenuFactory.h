#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortCheatMenuFactory.generated.h"

class UCommonUserWidget;

UCLASS(Blueprintable)
class UFortCheatMenuFactory : public UObject {
    GENERATED_BODY()
public:
    UFortCheatMenuFactory();
    UFUNCTION(BlueprintCallable)
    static void AddStoreCheatMenu(UCommonUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static void AddGrantCheatMenu(UCommonUserWidget* Widget, const FString& TemplateId, const FString& InstanceID);
    
};

