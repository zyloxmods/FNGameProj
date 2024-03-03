#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CosmeticPreviewInterface.generated.h"

class UFortItemDefinition;

UINTERFACE(Blueprintable)
class FORTNITEGAME_API UCosmeticPreviewInterface : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API ICosmeticPreviewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PerformSpecialAction(FName ActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetSpecialPreviewActions(TArray<FName>& OutActionList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CustomizePreviewInstance(const UFortItemDefinition* InItemDefinition);
    
};

