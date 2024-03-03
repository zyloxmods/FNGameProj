#include "GenericSmartObject.h"
#include "SmartObjectComponent.h"

AGenericSmartObject::AGenericSmartObject() {
    this->SOComponent = CreateDefaultSubobject<USmartObjectComponent>(TEXT("SmartObjectComp"));
}

