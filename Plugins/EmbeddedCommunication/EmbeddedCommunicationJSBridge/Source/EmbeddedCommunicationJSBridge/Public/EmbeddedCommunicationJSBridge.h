#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WebJSFunction.h"
#include "WebJSFunction.h"
#include "EmbeddedCommunicationJSBridge.generated.h"

UCLASS(Blueprintable)
class UEmbeddedCommunicationJSBridge : public UObject {
    GENERATED_BODY()
public:
    UEmbeddedCommunicationJSBridge();
    UFUNCTION(BlueprintCallable)
    void SetEventListener(FWebJSFunction Callback);
    
    UFUNCTION(BlueprintCallable)
    void RunCommand(const FName& Subsystem, const FString& Command, const FString& JsonParams, FWebJSResponse Response);
    
    UFUNCTION(BlueprintCallable)
    void PostMessage(const FString& ID, const FName& Subsystem, const FString& Command, const FString& JsonParams);
    
};

