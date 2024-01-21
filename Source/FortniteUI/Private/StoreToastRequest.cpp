#include "StoreToastRequest.h"

void UStoreToastRequest::SkipRequest() {
}

bool UStoreToastRequest::ShouldBeginRequest() {
    return false;
}

bool UStoreToastRequest::IsRequestReady() {
    return false;
}

FStoreCallout UStoreToastRequest::GetToast() const {
    return FStoreCallout{};
}

void UStoreToastRequest::CompleteRequest() {
}

void UStoreToastRequest::BeginRequest() {
}

UStoreToastRequest::UStoreToastRequest() {
    this->CatalogMessaging = NULL;
}

