#include "AthenaNavInvokerBox.h"
#include "NavigationInvokerComponent.h"

void AAthenaNavInvokerBox::SetInvokerEnabled(bool bEnable) {
}

AAthenaNavInvokerBox::AAthenaNavInvokerBox() {
    GenerationRange = 1;
    InvokerComp = CreateDefaultSubobject<UNavigationInvokerComponent>(TEXT("InvokerComponent"));
}

