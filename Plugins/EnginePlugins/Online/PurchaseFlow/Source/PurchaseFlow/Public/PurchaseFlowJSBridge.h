#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PurchaseFlowReceiptParam.h"
#include "PurchaseFlowJSBridge.generated.h"

UCLASS(Blueprintable)
class UPurchaseFlowJSBridge : public UObject {
    GENERATED_BODY()
public:
    UPurchaseFlowJSBridge();
    UFUNCTION(BlueprintCallable)
    void RequestClose(const FString& CloseInfo);
    
    UFUNCTION(BlueprintCallable)
    void Receipt(FPurchaseFlowReceiptParam NewReceipt);
    
    UFUNCTION(BlueprintCallable)
    bool LaunchValidatedExternalBrowserUrl(const FString& AllowedBrowserID, const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    bool LaunchExternalBrowserUrl(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    FString GetExternalBrowserPath(const FString& BrowserId);
    
    UFUNCTION(BlueprintCallable)
    FString GetExternalBrowserName(const FString& BrowserId);
    
    UFUNCTION(BlueprintCallable)
    FString GetDefaultExternalBrowserID(const FString& URL);
    
};

