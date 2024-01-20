#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StoreCallout.h"
#include "StoreToastRequest.generated.h"

class UCatalogMessaging;

UCLASS(Blueprintable)
class UStoreToastRequest : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCatalogMessaging* CatalogMessaging;
    
public:
    UStoreToastRequest();
    UFUNCTION(BlueprintCallable)
    void SkipRequest();
    
    UFUNCTION(BlueprintCallable)
    bool ShouldBeginRequest();
    
    UFUNCTION(BlueprintCallable)
    bool IsRequestReady();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStoreCallout GetToast() const;
    
    UFUNCTION(BlueprintCallable)
    void CompleteRequest();
    
    UFUNCTION(BlueprintCallable)
    void BeginRequest();
    
};

