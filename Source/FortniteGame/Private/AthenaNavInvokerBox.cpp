#include "AthenaNavInvokerBox.h"
#include "NavigationInvokerComponent.h"

void AAthenaNavInvokerBox::SetInvokerEnabled(bool bEnable) {
}

AAthenaNavInvokerBox::AAthenaNavInvokerBox() {
    this->GenerationRange = 1;
    this->InvokerComp = CreateDefaultSubobject<UNavigationInvokerComponent>(TEXT("InvokerComponent"));
}

