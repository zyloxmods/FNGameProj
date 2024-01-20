#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "LocalServiceMessageContext.generated.h"

UCLASS(Blueprintable, NonTransient)
class FORTNITEGAME_API ULocalServiceMessageContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    ULocalServiceMessageContext();
    UFUNCTION(BlueprintCallable)
    void RemoveLocalServiceMessage(const FString& Identifier);
    
    UFUNCTION(BlueprintCallable)
    void AddLocalServiceMessage(const FString& Identifier, FText Title, FText Body);
    
};

