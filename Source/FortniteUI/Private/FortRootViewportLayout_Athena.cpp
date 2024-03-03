#include "FortRootViewportLayout_Athena.h"

void UFortRootViewportLayout_Athena::PurchasingWidgetDisplayCallback(UWidget* WebWidget, const FString& OfferId) {
}

void UFortRootViewportLayout_Athena::PurchasingWidgetDismissedCallback() {
}

UFortRootViewportLayout_Athena::UFortRootViewportLayout_Athena() {
    this->WebPurchaseScreenWidgetClass = NULL;
    this->WebPurchaseWidget_RuntimeSpawned = NULL;
}

