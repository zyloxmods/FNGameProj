#include "AthenaNavInvokerBox.h"
#include "NavigationInvokerComponent.h"

void AAthenaNavInvokerBox::SetInvokerEnabled(bool bEnable) {
}

AAthenaNavInvokerBox::AAthenaNavInvokerBox() {
    this->GenerationRange = 5000.00f;
    this->InvokerComp = CreateDefaultSubobject<UNavigationInvokerComponent>(TEXT("InvokerComponent"));
}

