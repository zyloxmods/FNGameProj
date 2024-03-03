#include "PurchaseFlowJSBridge.h"

void UPurchaseFlowJSBridge::RequestClose(const FString& CloseInfo) {
}

void UPurchaseFlowJSBridge::Receipt(FPurchaseFlowReceiptParam NewReceipt) {
}

bool UPurchaseFlowJSBridge::LaunchValidatedExternalBrowserUrl(const FString& AllowedBrowserID, const FString& URL) {
    return false;
}

bool UPurchaseFlowJSBridge::LaunchExternalBrowserUrl(const FString& URL) {
    return false;
}

FString UPurchaseFlowJSBridge::GetExternalBrowserPath(const FString& BrowserId) {
    return TEXT("");
}

FString UPurchaseFlowJSBridge::GetExternalBrowserName(const FString& BrowserId) {
    return TEXT("");
}

FString UPurchaseFlowJSBridge::GetDefaultExternalBrowserID(const FString& URL) {
    return TEXT("");
}

UPurchaseFlowJSBridge::UPurchaseFlowJSBridge() {
}

