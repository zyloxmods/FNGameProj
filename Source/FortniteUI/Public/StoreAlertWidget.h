#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "StoreAlertWidget.generated.h"

class UCatalogMessaging;
class UStoreToastRequest;

UCLASS(Blueprintable, EditInlineNew)
class UStoreAlertWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStoreToastRequest* StoreUpdatedRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCatalogMessaging* CatalogMessaging;
    
    UStoreAlertWidget();
    UFUNCTION(BlueprintCallable)
    void SetupRequest();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayStoreUpdated(UStoreToastRequest* NewStoreUpdatedRequest);
    
};

